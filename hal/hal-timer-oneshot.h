#pragma once

#include "hal-timer.h"


namespace jf::hal
{

class OneshotTimer : public Timer
{
public:
    OneshotTimer(size_t milliseconds, User*);
    void start() override;
    void stop() override;
    bool is_active() const override { return _is_active; }

private:
    void _expired() override;

private:
    size_t _milliseconds;
    bool _is_active;
};

}
