#include <iostream>
using namespace std;


class Base
{
public:
    ~Base()
    {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

int main()
{
    Base b;
    return 0;
}
