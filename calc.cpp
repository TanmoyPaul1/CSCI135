//This program adds or subtracts inputed numbers 
//depending on the sign that comes before said number. 

#include <iostream>

// This is the main function
int main()
{
	int num; // This is the number inputed from the txt file
	char func; // This is the function character
	int total = 0; // This represents the final answer 
	std::cin >> total;

	while (std::cin >> func >> num) // This is file redirection
	{
		if (func == '+' ) // This is the addition function
		{
			total += num;
		}
		if (func == '-') // This is the subtraction function
		{
			total -= num;
		}
	}
	std::cout << "The total is " << total << std::endl; //This prints the answer
}