#include "point.h"

#include <iostream>
using namespace std;

int main()
{
    point p(1,2);
    const point vec(3,4);

    point& p2 = p += vec;

    cout << "p: " << p << endl;
    cout << "p2: " << p2 << endl;

    return 0;
}
