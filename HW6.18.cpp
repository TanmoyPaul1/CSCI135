//Write a function vector append(vector a, vector b) that appends 
//one vector after another. For example, if a is 1 4 9 16 and b is 9 7 4 9 11 
//then append returns the vector 1 4 9 16 9 7 4 9 11

#include <iostream>
#include <vector>

std::vector<int> append(std::vector<int> a, std::vector<int> b)
{
    for (int i = 0; i < b.size(); i++)
        a.push_back(b[i]);

    return a;
}