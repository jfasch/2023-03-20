#include <iostream>
using namespace std;


void pass_by_ref(const int& i)
{
    cout << __PRETTY_FUNCTION__ << ' ' << "value: " << i << ", address: " << &i << endl;
}

int main()
{
    int j = 666;
    cout << __PRETTY_FUNCTION__ << ' ' << "value: " << j << ", address: " << &j << endl;

    pass_by_ref(j);

    return 0;
}
