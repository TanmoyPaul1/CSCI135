#include <iostream>
#include <vector>

// Write a program in the language of your choice that prints all permutations of the sequence 2, 3, 5, 8, 13.

void printVector(std::vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << "\n";
}

void permute(std::vector<int> v, std::vector<int> temp, int x)
{
    for (int i = x + 1; i < v.size(); i++)
    {
        int t = temp[x];
        temp[x] = temp[i];
        temp[i] = t;

        std::cout << "    ";
        printVector(temp);
        permute(v, temp, i);

        t = temp[x];
        temp[x] = temp[i];
        temp[i] = t;
    }
}

int main()
{
    std::vector<int> v{2, 3, 5, 8, 13};
    std::vector<int> temp = v;

    for (int i = 0; i < v.size(); i++)
    {
        permute(v, temp, i);
    }
}