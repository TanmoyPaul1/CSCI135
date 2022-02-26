#include <iostream>

int main()
{
	int num1, num2;
	std::cout << "Enter the first number: " ;
	std::cin >> num1;
	std::cout << "Enter the second number: ";
	std::cin >> num2;

	int smaller;
	if (num1 < num2)
	{
		smaller = num1;
	}
	else if (num2 < num1)
	{
		smaller = num2;
	}
	else
	{
		std::cout << "They are equal" << std::endl;
		return 0;
	}
	std::cout << "The smaller one is " << smaller << std::endl;
	return 0;
}
