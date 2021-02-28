#include <iostream>
#include <string>

std::string removeLeadingSpaces(std::string line)
{
    while (line[0] == ' ')
    {
        line = line.substr(1);
    }
    return line;
}