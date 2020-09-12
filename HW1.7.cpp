// This function will ask for 3 names and then print them out.

#include <iostream>

int main()
{

	std::cout << "Enter 3 names such as friends names or movie names: "; 
	char name1[10];
	char name2[10];
	char name3[10];
	std::cin >> name1;
	std::cin >> name2;
	std::cin >> name3; 
	std::cout << name1 << std::endl;
	std::cout << name2 << std::endl;
	std::cout << name3 << std::endl;
	return 0;
}