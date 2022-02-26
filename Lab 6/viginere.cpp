#include <iostream>
#include <cctype>
#include "viginere.h"

std::string encryptViginere(std::string plaintext, std::string keyword)
{
    std::string result = "";
    char c, d = ' ';
    int j = 0;
    for (int i = 0; i < plaintext.size(); i++)
    {
        c = plaintext[i];
        d = keyword[j];
        if (isalpha(c))
        {
            if ((int)c + (int) d - 65 - 6> 90)
            {
                result = result + (char)(((int)c + (int)d - 65) - 26 - 6);
            }
            else if ((int) c + (int) d - 65 < 65)
            {
                result = result + (char)(((int)c + (int)d - 65) + 26);
            }
            else
            {
                result = result + (char)((int)c + (int)d - 65 - 6);
            }
            j++;
            if(j == keyword.length())
            {
                j = 0;
            }
        }
        else
        {
            result = result + c;
        }
        
    }
    return result;
}