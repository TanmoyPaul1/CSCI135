#include <iostream>
#include "MyVector.h"

int main()
{
    MyVector<int> v1(0);
    std::cout << v1.size() << '\n';
    std::cout << v1.capacity() << '\n';
    std::cout << std::boolalpha << v1.empty() << '\n';
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    std::cout << "VALUES:  " << v1[0] << "\n";
    std::cout << "VALUES:  " << v1[1] << "\n";
    std::cout << "VALUES:  " << v1[2] << "\n";

    v1.pop_back();
    std::cout << "VALUES:  " << v1[1] << "\n";
    v1.pop_back(1);
    std::cout << "VALUES:  " << v1[1] << "\n";

    v1.push_back(6);
    std::cout << "VALUES:  " << v1[1] << "\n";
    v1.push_back(7);
    std::cout << "VALUES:  " << v1[2] << "\n";
    std::cout << v1.capacity() << '\n';
    v1.clear();
    std::cout << "VALUES:  " << v1[0] << "\n";

    
    MyVector<std::string> v2(5);
    std::cout << '\n' << v2.size() << '\n';
    std::cout << v2.capacity() << '\n';
    std::cout << std::boolalpha << v2.empty() << '\n';
    v2[0] = "Hello";
    std::cout << "VALUES:  " << v2[0] << "\n";
    v2.pop_back();
    //doesn't work 
    v2.push_back("hello");
    std::cout << "VALUES:  " << v2[1] << "\n";
    std::cout << v2.size() << "\n";
    v2.pop_back();
    std::cout << v2.size() << "\n";
}