#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int lower, higher;
    std::cout << "Enter the lower bound: ";
    std::cin >> lower;
    std::cout << "Enter the lower bound: ";
    std::cin >> higher;

    srand((unsigned)time(0));
    int random = rand() % higher + lower;

    return 0;
}