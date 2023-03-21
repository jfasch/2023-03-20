#include <unistd.h>
#include <string.h>
#include <iostream>
using namespace std;


class String
{
public:
    String()
    {
        _impl = new char[1];
        _impl[0] = '\0';
    }
    String(const char* s)
    {
        size_t len = strlen(s);
        _impl = new char[len+1];
        strcpy(_impl, s);
    }
    ~String()
    {
        delete[] _impl;
    }

    String(const String& s)
    {
        size_t len = strlen(s._impl);
        _impl = new char[len+1];
        strcpy(_impl, s._impl);
    }

    String& operator=(const String& s)
    {
        if (this != &s) {
            delete[] _impl;

            size_t len = strlen(s._impl);
            _impl = new char[len+1];
            strcpy(_impl, s._impl);
        }

        return *this;
    }

    const char* c_str() const { return _impl; }
    operator const char*() const { return _impl; }

private:
    char* _impl;
};

// String string_create()
// {
//     return String("Joerg Faschingbauer");
// }

int main()
{
    String s1("hallo");
    String s2 = s1;  // <--- copy ctor

    cout << s1 << endl;
    cout << s2 << endl;

    String s3;
    String s4;
    s4 = s3 = s2;
    cout << s3 << endl;
    cout << s4 << endl;

    String s666("Teifl!");
    s666 = s666;

    return 0;
}
