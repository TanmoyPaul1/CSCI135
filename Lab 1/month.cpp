#include <iostream>

int main()
{
	int year, month;

	std::cout << "Enter year : ";
	std::cin >> year;
	std::cout << "Enter month : ";
	std::cin >> month;

	if ((year % 4) != 0)
	{
		year = 1;
	}
	else if ((year % 100) != 0)
	{
		year = 0;
	}
	else if ((year % 400) != 0)
	{
		year = 1;
	}
	else
	{
		year = 0;
	}

	if (year == 0)
	{
		if (month == 2)
		{
			std::cout << "29 days \n";
		}
	}

	if (year == 1)
	{
		if (month == 2)
		{
			std::cout << "28 days \n";
		}
	}

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		std::cout << "31 days \n";
	}

	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		std::cout << "30 days \n";
	}

	return 0;
}