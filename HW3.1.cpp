//Write a program that reads an integer and 
//prints whether it is negative, zero, or positive.

#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	int num;
	std::cin >> num; //The number is inputted
	if (num > 0) {
		std::cout << "The number is positive. \n"; //Result if num is +
	}
	else if (num < 0) {
		std::cout << "The number is negative. \n"; //Result if num is -
	}
	else if (num == 0) {
		std::cout << "The number is zero. \n"; //Result if num is 0
	}
	else {
		std::cout << "A number was not inputted. \n"; //Result if num isnt int
	}
	return 0;
}
