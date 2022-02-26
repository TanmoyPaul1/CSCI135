//This code squares an inputed number that is between 0 and 100

#include <iostream>

int main()
{
	std::cout << "Please enter an integer between 0 and 100: ";
	int num;
	std::cin >> num;
	std::cout << num << std::endl;
	while (num < 1 || num > 99) //Checking if num is within boundary
	{
		std::cout << "Please re-enter: ";
		std::cin >> num;
	}

	std::cout << "Number squared is " << (num * num) << std::endl; //Squaring
	return 0;
}