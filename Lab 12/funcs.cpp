#include <iostream>
#include <vector>

std::vector<int> makeVector(int n)
{
    std::vector<int> x;
    for (int i = 0; i < n; i++)
    {
        x.push_back(i);
    }
    return x;
}

std::vector<int> goodVibes(const std::vector<int> &v)
{
    std::vector<int> x;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= 0)
        {
            x.push_back(v[i]);
        }
    }
    return x;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    for (int i = 0; i < vegeta.size(); i++)
        goku.push_back(vegeta[i]);
    
    for (int i = 0; i <= vegeta.size(); i++)
        vegeta.pop_back();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2)
{
    std::vector<int> x;
    int size = (v1.size() > v2.size() ? v2.size() : v1.size());
    for (int i = 0; i < size; i++)
    {
        x.push_back(v1[i] + v2[i]);
    }
    if(v1.size() > v2.size())
    {
        for (int i = size; i < v1.size(); i++)
            x.push_back(v1[i]);
    }
    else
    {
        for (int i = size; i < v2.size(); i++)
            x.push_back(v2[i]);
    }
    return x;
}