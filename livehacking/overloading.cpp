#include <string>
#include <iostream>


void foo(const std::string& s)
{
    std::cout << __PRETTY_FUNCTION__ << ": " <<  s << std:: endl;
}

void foo(const char* s)
{
    std::cout << __PRETTY_FUNCTION__ << ": " <<  s << std:: endl;
}

int main()
{
    std::string s1("bar");
    char s2[] = "bar";
    
    foo(s1);
    foo(s2);

    return 0;
}
