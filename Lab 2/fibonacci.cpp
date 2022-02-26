//This code prints 59 fibonacci number
//It messes up printing the numbers at a certain point 

#include <iostream>

int main()
{
	int fib[60];
	fib[0] = 0;
	fib[1] = 1;
	std::cout << fib[0] << std::endl;
	std::cout << fib[1] << std::endl;

	for (int i = 2; i < 60; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2]; //Fibonacci function
		std::cout << fib[i] << std::endl;
	}
}

//When the numbers pass 2 billion, the output will be a different
//number than expected due to the fact that the type 'int' is only for 
//integers between -2147483648 to 2147483647.

//Once the number surpasses that limit, it starts printing negative
//integers and then a mixture between positive and negative 
//integers with 9-10 digits. 