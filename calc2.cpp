//This program adds and subtracts numbers based on
//the sign before, and gives a new sum per semicolon.

#include <iostream>

// This is the main function
int main()
{
	int num; // This is the number inputed from the txt file
	char func; // This is the function character
	int total = 0; // This represents the final answer 
	std::cin >> total;

	while (std::cin >> func) // This is file redirection
	{
		std::cin >> num;
		if (func == '+') // This is the addition function
		{
			total += num;
		}
		else if (func == '-') // This is the subtraction function
		{
			total -= num;
		}
		else 
		{
			std::cout << "The total is " << total << std::endl; //This prints the answer
			total=num;
		}
	}
}