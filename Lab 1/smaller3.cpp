#include <iostream>

int main()
{
	int num1, num2, num3;
	std::cout << "Enter the first number: " ;
	std::cin >> num1;
	std::cout << "Enter the second number: ";
	std::cin >> num2;
	std::cout << "Enter the third number: ";
	std::cin >> num3;

	int smaller=num3;
	if (num1 <= num2)
	{
		if (num1 < num3)
		{
			smaller = num1;
		}
	}
	else if (num2 < num1)
	{
		if (num2 < num3)
		{
			smaller = num2;
		}
	}
	if((num1==num2)==num3)
	{
		std::cout << "They are all equal." << std::endl;
		return 0;
	}
	std::cout << "The smallest one is " << smaller << std::endl;
	return 0;
}
