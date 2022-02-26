#include <iostream>
#include "funcs.h"

int main()
{
    std::vector<int> v{1, 2, -1, 3, 4, -1, 6};
    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{4, 5};

    std::cout << "\nTask A: \n";

    std::vector<int> A = makeVector(10);
    std::cout << "Vector A: { ";
    for (int i = 0; i < A.size(); i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << "}\n";

    std::cout << "\nTask B: \n";

    std::vector<int> B = goodVibes(v);
    std::cout << "Vector B: { ";
    for (int i = 0; i < B.size(); i++)
    {
        std::cout << B[i] << " ";
    }
    std::cout << "}\n";

    std::cout << "\nTask D: \n";

    std::vector<int> D = sumPairWise(v1, v2);
    std::cout << "Vector D: { ";
    for (int i = 0; i < D.size(); i++)
    {
        std::cout << D[i] << " ";
    }
    std::cout << "}\n";

    std::cout << "\nTask C: \n";

    gogeta(v1, v2);
    std::cout << "Vector v1: { ";
    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << v1[i] << " ";
    }
    std::cout << "}\n";

    std::cout << "Vector v2: { ";
    for (int i = 0; i < v2.size(); i++)
    {
        std::cout << v2[i] << " ";
    }
    std::cout << "}\n\n";
}