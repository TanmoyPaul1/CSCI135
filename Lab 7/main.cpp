#include <iostream>
#include "unindent.h"
#include "indent.h"

int main()
{
    int count = 0;
    std::string result, line, compare = "";

    //Prints out the original contents of the bad code file. 
    std::cout << "\nOriginal file: \n\n";
    system("cat bad-code.cpp");

    //Prints out the output for Task A. 
    std::cout << "\n\nTask A: \n\n";
    while(getline(std::cin, line))
    {
        compare = removeLeadingSpaces(line);
        std::cout << compare << std::endl;

        if (countChar(compare, '}') == 1)
        {
            count--;
        }
        for (int i = 0; i < count; i++)
        {
            result += '\t';
        }
        if (countChar(compare, '{') == 1)
        {
            count++;
        }
        result += compare + "\n";
    }

    //Prints out the output for Task B.
    std::cout << "\nTask B: \n\n";
    std::cout << result << std::endl;
    return 0;
}