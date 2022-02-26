// Write a function vector merge_sorted(vector a, vector b) that merges two sorted vectors, 
// producing a new sorted vector. Keep an index into each vector, indicating how much of it 
// has been processed already. Each time, append the smallest unprocessed element from either 
// vector, then advance the index. For example, if a is 1 4 9 16 and b is 4 7 9 9 11 then 
// merge_sorted returns the vector 1 4 4 7 9 9 9 11 16

#include <iostream>
#include <vector>

std::vector<int> merge_sorted(std::vector<int> a, std::vector<int> b)
{
    std::vector<int> x;
    int size = a.size() + b.size();
    int aind = 0, bind = 0;
    if (a.size() == 0)
        return b;
    if (b.size() == 0)
        return a;
    for (int i = 0; i < size; i++)
    {
        if (a[aind] < b[bind])
        {
            if (aind == a.size())
            {
                x.push_back(b[bind]);
                i = size;
            }
            else
            {
                x.push_back(a[aind]);
                aind++;
            }
            
        }
        else
        {
            if (bind == b.size())
            {
                x.push_back(a[aind]);
                i = size;
            }
            else
            {
                x.push_back(b[bind]);
                bind++;
            }
            
        }
    }

    return x;
}
 
int main()
{
    std::vector<int> a{1, 4, 9, 16};
    std::vector<int> b{4, 7, 9, 9, 11};
    a  = merge_sorted(a,b);
    for (int i = 0; i < a.size(); i++)
    {
        std::cout << a[i] << " ";
    }
}