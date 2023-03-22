#pragma once

#include "switch.h"

#include <string>


class SysFSSwitch : public Switch
{
public:
    SysFSSwitch(int gpionr);

    void export_and_configure();
    void unexport();
    
    Switch::State state() const override;
    void on() override;
    void off() override;

private:
    int _gpionr;
    std::string _gpiodir;
};
