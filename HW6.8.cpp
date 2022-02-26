//Write a function that checks whether two arrays 
//have the same elements in the same order.

#include <iostream>

bool equals(int a[], int a_size, int b[], int b_size)
{
    if(b_size > a_size)
    {
        return false;
    }
    for (int i = 0; i < a_size; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}