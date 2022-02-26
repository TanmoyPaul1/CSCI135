#include <iostream>

int main()
{
	int year;

	std::cout << "Enter an integer representing a year number: ";
	std::cin >> year;

	if ((year % 4) != 0)
	{
		std::cout << "It is a common year \n";
	}
	else if ((year % 100) != 0)
	{
		std::cout << "This is a leap year \n";
	}
	else if ((year % 400) != 0)
	{
		std::cout << "It is a common year \n";
	}
	else
	{
		std::cout << "This is a leap year \n";
	}

	return 0;
}