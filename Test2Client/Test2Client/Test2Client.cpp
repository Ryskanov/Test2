#include <iostream>
#include "Test2.h"
#include <string>

int main()
{   
    std::string str;
    str = "Hello, world!\n";
    std::cout << str;
    std::cout << upper(str);
}