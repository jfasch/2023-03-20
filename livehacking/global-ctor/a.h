#pragma once

#include "class.h"

class A
{
public:
    static Class c;
};

struct __Init_A__
{
    __Init_A__();
};

static __Init_A__ __init_a__;
