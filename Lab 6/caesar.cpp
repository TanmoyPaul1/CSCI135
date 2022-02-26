#include <iostream>
#include "caesar.h"

char shiftChar(char c, int rshift)
{
    if ((int)c > 64 && (int)c < 91) //65 - 90   97 - 122
    {
        if ((int)c + rshift > 90)
        {
            return (char) ((int(c) + rshift) - 26);
        }
        else if ((int)c + rshift < 65)
        {
            return (char)((int(c) + rshift) + 26);
        }
        return (char)(int(c) + rshift);
    }
    else if ((int)c > 96 && (int)c < 123)
    {
        if ((int)c + rshift > 122)
        {
            return (char)((int(c) + rshift) - 26);
        }
        else if ((int)c + rshift < 97)
        {
            return (char)((int(c) + rshift) + 26);
        }
        return (char)(int(c) + rshift);
    }
    return c;
}
std::string encryptCaesar(std::string plaintext, int rshift)
{
    std:: string result = "";
    for (int i = 0; i<plaintext.size(); i++)
    {
        result = result + shiftChar((char)plaintext[i], rshift);
    }
    return result; 
}