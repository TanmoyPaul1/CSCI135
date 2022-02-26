#include <iostream>
#include "decrypt.h"

std::string decryptCaesar(std::string ciphertext, int rshift)
{
    std::string result = "";
    char c;
    for (int i = 0; i < ciphertext.size(); i++)
    {
        c = (char)ciphertext[i];
        if ((int)c > 64 && (int)c < 91) //65 - 90   97 - 122
        {
            if ((int)c - rshift > 90)
            {
                result = result + (char)((int(c) - rshift) - 26);
            }
            else if ((int)c - rshift < 65)
            {
                result = result + (char)((int(c) - rshift) + 26);
            }
            else
            {
                result = result + (char)(int(c) - rshift);
            }
        }
        else if ((int)c > 96 && (int)c < 123)
        {
            if ((int)c - rshift > 122)
            {
                result = result + (char)((int(c) - rshift) - 26);
            }
            else if ((int)c - rshift < 97)
            {
                result = result + (char)((int(c) - rshift) + 26);
            }
            else
            {
                result = result + (char)(int(c) - rshift);
            }
        }
        else
        {
            result = result + c;
        }
    }
    return result;
}

std::string decryptViginere(std::string ciphertext, std::string keyword)
{
    std::string result = "";
    char c, d = ' ';
    int j = 0;
    for (int i = 0; i < ciphertext.size(); i++)
    {
        c = ciphertext[i];
        d = keyword[j];
        if (isalpha(c))
        {
            if ((int)c - (int)d + 71 > 90)
            {
                result = result + (char)(((int)c - (int)d + 71) + 26);
            }
            else if ((int)c - (int)d - 71 < 65)
            {
                result = result + (char)(((int)c - (int)d + 71) + 26);
            }
            else
            {
                result = result + (char)((int)c - (int)d + 71);
            }
            j++;
            if (j == keyword.length())
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