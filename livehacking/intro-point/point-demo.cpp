#include <iostream>
// using namespace std;
using std::cout;
using std::endl;

#include "point.h"


int main()
{
    {
        const point p;
        cout << "uninitialized: " << p << endl;
    }

    {
        const point p;
        cout << "uninitialized: " << '(' << p.x() << ',' << p.y() << ')' << endl;
    }

    {
        const point p(666, 42);
        cout << "initialized: " << p << endl;
    }

    {
        const point p(1,2);
        const point p1 = p;     // <--- copy ctor (generated automatically!!!!!!!!!!)
        (void)p1; // suppress "unused" warning
        const point p2;         // <--- default ctor
        // p2 = p;           // <--- assignment operator (generated automatically!!!!!!!!!!)
    }

    {
        const point p = {1,2};                              // <--- explicit ctor
        cout << "struct-initialized: " << p << endl;
    }

    {
        const point p = {1,2};    // <--- explicit ctor
        const point q(3,4);       // <--- explicit ctor

        if (p == q)
            cout << p << " == " << q << endl;
        if (p != q)
            cout << p << " != " << q << endl;

        if (p.operator==(q))
            cout << p << " == " << q << endl;
    }

    {
        point p = {1,2};
        cout << "original: " << p << endl;

        p.move(3, 4);
        cout << "moved: " << p << endl;
    }

    return 0;
}
