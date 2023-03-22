#include "switch-sysfs.h"

#include <hal-fileutil.h>
#include <hal-delay.h>

#include <string>
#include <sstream>
#include <cassert>


static const std::string basedir = "/sys/class/gpio";

SysFSSwitch::SysFSSwitch(int gpionr)
: _gpionr(gpionr)
{
    std::ostringstream s;
    s << "gpio" << _gpionr;

    _gpiodir = basedir + "/" + s.str();
}

void SysFSSwitch::export_and_configure()
{
    std::string exportfile = basedir + "/export";
    jf::hal::write_to_file_int(exportfile, _gpionr);

    // wait for gpiodir to appear. sadly, this is an asynchronous
    // operation.
    int ntries = 300;
    do {
        jf::hal::delay_ms(5);
        int error = access(_gpiodir.c_str(), R_OK|X_OK);
        if (!error)
            break;
        if (--ntries == 0)
            assert(false);
    } while (true);

    std::string directionfile = _gpiodir + "/direction";
    jf::hal::write_to_file(directionfile, "out");
}

void SysFSSwitch::unexport()
{
    std::string unexportfile = basedir + "/unexport";
    jf::hal::write_to_file_int(unexportfile, _gpionr);
}
    
Switch::State SysFSSwitch::state() const
{
    std::string valuefile = _gpiodir + "/value";
    int value = jf::hal::read_from_file_int(valuefile);
    switch (value) {
        case 0:
            return Switch::State::OFF;
        case 1:
            return Switch::State::ON;
    }
    assert(!"bad value found in value-file");
    return Switch::State::ON;
}

void SysFSSwitch::on()
{
    std::string valuefile = _gpiodir + "/value";
    jf::hal::write_to_file_int(valuefile, 1);
}

void SysFSSwitch::off()
{
    std::string valuefile = _gpiodir + "/value";
    jf::hal::write_to_file_int(valuefile, 0);
}
