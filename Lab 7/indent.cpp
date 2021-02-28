#include <iostream>

int countChar(std::string line, char c)
{
    if (line[0] == c)
    {
        return 1;
    }
    return 0;
}