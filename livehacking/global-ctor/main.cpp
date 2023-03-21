#include "a.h"
#include "b.h"

#include <iostream>
using namespace std;

int main()
{
    cout << "A::c: " << A::c.i() << endl;
    cout << "B::c: " << B::c.i() << endl;

    return 0;
}
