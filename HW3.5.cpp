//Write a program that reads three numbers and prints 
//“increasing” if they are in increasing order, “decreasing” if they are in 
//decreasing order, and “neither” otherwise. Here, “increasing” means 
//“strictly increasing”, with each value larger than its predecessor. 

#include <iostream>

int main()
{
	std::cout << "Enter 3 numbers: ";
	double num1, num2, num3;
	std::cin >> num1 >> num2 >> num3; //The numbers are inputted
	if (num1 > num2 && num2 > num3) {
		std::cout << "decreasing\n"; //Result if nums are decreasing
	}
	else if (num1 < num2 && num2 < num3) {
		std::cout << "increasing\n"; //Result if nums are increasing
	}
	else {
		std::cout << "neither\n"; //Result if nums are neither increasing or decreasing
	}
	return 0;
}
