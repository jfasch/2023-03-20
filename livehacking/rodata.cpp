#include "point-impl.h"

#include <iostream>

using std::cout;
using std::endl;

static constexpr int mein_integer = random_integer();
static constexpr point mein_point(1,2);

int main()
{
    cout << "mein_integer: " << mein_integer << endl;
    cout << "mein_point: " << mein_point.x() << ',' << mein_point.y() << endl;
    return 0;
}
