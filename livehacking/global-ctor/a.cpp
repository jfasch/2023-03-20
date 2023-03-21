#include "a.h"

Class A::c = 1;

__Init_A__::__Init_A__()
{
    A::c = 1;
}
