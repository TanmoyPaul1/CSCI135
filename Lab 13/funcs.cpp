#include <iostream>
#include <cctype>
#include "funcs.h"

std::string printRange(int left, int right)
{
    if (left < right)
    {
        return std::to_string(left) + ' ' + printRange(left + 1, right);
    }
    return std::to_string(left);
}

int sumRange(int left, int right)
{
    if (left < right)
    {
        return left + sumRange(left + 1, right);
    }
    return left;
}

int sumArray(int *arr, int size)
{
    int x = arr[size - 1];
    if(size > 0)
    {
        return x + sumArray(arr, size - 1);
    }
    return 0;
}

bool isAlphanumeric(std::string s)
{
    if (s.length() == 0)
    {
        return false;
    }

    char c = s[0];
    if (isalpha(c) || isdigit(c))
    {
        if(s.length() == 1)
        {
            return true;
        }
        return isAlphanumeric(s.substr(1));
    }
    return false; 
}

bool nestedParens(std::string s)
{
    if (s.length() == 0)
    {
        return true;
    }

    if(s[0] == '(' && s[s.length() - 1] == ')')
    {
        return nestedParens(s.substr(1, s.length() - 2));
    }
    return false;
}

bool divisible(int *prices, int size, int a, int b)
{
    
}