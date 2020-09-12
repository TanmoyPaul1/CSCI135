// This program adds all inputed numbers and returns the sum. 

#include <iostream>

// This is the main function
int main()
{
	int num; // This is the number inputed from the txt file
	int sum = 0; // This is the total of all num values
	while (std::cin >> num) // This is file redirection
	{
		sum += num; // This is the addition function
	}
	std::cout << "The sum is " << sum << std::endl; //This prints the answer
}