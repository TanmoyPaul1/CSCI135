#include <iostream>
#include "funcs.h"

// add functions here
void test_ascii(std::string str)
{
    std::cout<< "\nInput: " << str << std::endl;
    for (int i = 0; i<str.length(); i++)
    {
        char c = str[i];
        std::cout << c << " " << (int)c << std::endl;
    }
}
