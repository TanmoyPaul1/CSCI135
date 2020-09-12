// This program outputs the cost per 100 miles
// and the distance possible with inputted gallons and price.
#include <iostream>

int main()
{
	double gallons; // This is the total gallons in the car
	double efficiency; // This is the efficiency of the gas
	double price; // This is the price per gallon
	double cost; // This is the cost of going 100 miles
	double distance; // This is the distance traveled

	std::cout << "What is the number of gallons in the tank?" << std::endl;
	std::cin >> gallons;
	std::cout << "What is the fuel efficiency in miles per gallon?" << std::endl;
	std::cin >> efficiency;
	std::cout << "What is the price of gas per gallon?" << std::endl;
	std::cin >> price;

	cost = (100 / efficiency) * price;
	std::cout << "The cost per 100 miles is " << cost << std::endl;

	distance = (gallons * efficiency);
	std::cout << "The distance the car can go with " << gallons << " gallons is " << distance << " miles" << std::endl;
}