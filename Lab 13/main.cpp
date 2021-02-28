#include <iostream>
#include "funcs.h"

int main()
{
    std::cout << "\nTask A: \n";
    std::cout << printRange(1, 5) << '\n';
    std::cout << printRange(-7, 3) << '\n';
    
    std::cout << "\nTask B: \n";
    std::cout << sumRange(1, 5) << '\n';
    std::cout << sumRange(-7, 3) << '\n';

    std::cout << "\nTask C: \n";
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size);    // Add all elements
    std::cout << "Sum is " << sum1 << std::endl; // Sum is 43

    int sum2 = sumArray(arr, 5);       // Add up first five elements
    std::cout << "Sum is " << sum2 << std::endl; // Sum is 34

    delete[] arr; // deallocate it

    std::cout << "\nTask D: \n";
    std::cout << isAlphanumeric("ABCD") << std::endl;   // true (1)
    std::cout << isAlphanumeric("Abcd1234xyz") << std::endl; // true (1)
    std::cout << isAlphanumeric("KLMN 8-7-6") << std::endl;  // false (0)

    std::cout << "\nTask E: \n";
    std::cout << nestedParens("((()))") << std::endl; // true (1)
    std::cout << nestedParens("()") << std::endl;     // true (1)
    std::cout << nestedParens("") << std::endl;       // true (1)

    std::cout << nestedParens("(((") << std::endl;   // false (0)
    std::cout << nestedParens("(()") << std::endl;   // false (0)
    std::cout << nestedParens(")(") << std::endl;    // false (0)
    std::cout << nestedParens("a(b)c") << std::endl; // false (0)

    std::cout << "\nTask F: \n";
}