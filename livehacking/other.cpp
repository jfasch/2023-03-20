extern int i_global;

#include <iostream>
using namespace std;

void bar()
{
    cout << __PRETTY_FUNCTION__ << ": i_global=" << i_global << endl;
}
