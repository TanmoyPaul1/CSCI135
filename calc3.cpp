//This program adds, subtracts and uses exponents to  
//solve formulas and returns a value per semicolon. 

#include <iostream>

// This is the main function
int main()
{
	char func; // This is the function character
	int total; // This is the number inputed from the txt file
	int placeholder = 1; // This is a placeholder used for exponent functions
	std::cin >> total;
	int num = total; // This represents the final answer 

	while (std::cin >> func) // This is file redirection
	{
		if (func=='^') // This is the exponent function
		{
			if (placeholder == 1) // This is if the exponent number was added
			{
				total -= num;
				total += (num * num);
			}
			if (placeholder == 2) // This is if the exponent number was subtracted
			{
				total += num;
				total -= (num * num);
			}
		}
		else if (func == '+') // This is the addition function
		{
			std::cin >> num;
			total += num;
			placeholder = 1;
		}
		else if (func == '-') // This is the subtraction function
		{
			std::cin >> num;
			total -= num;
			placeholder = 2;
		}
		if (func == ';') // This is the end of the formula line
		{
			std::cout << "The total is " << total << std::endl; //This prints the answer
			total = 0;
			std::cin >> total; // This resets the total
			num = total; // This resets the function number 
			placeholder = 1; // This resets the placeholder
		}
	}
}