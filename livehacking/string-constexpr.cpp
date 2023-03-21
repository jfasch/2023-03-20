#include <iostream>
#include <string>
#include <string_view>
using namespace std;

constexpr string s("abc");
constexpr const char* cs = s.c_str();
constexpr string_view v("asdfghjkl;';lkjhgfdsasdfghjkl;lkjhgfdsasdfghjkjhgfdsdfghjklkjhgfdsdfghjkljhgfdsdfghj");

int main()
{
    cout << cs << endl;
    cout << v << endl;

    cout << v.substr(4, 9) << endl;
    return 0;
}
