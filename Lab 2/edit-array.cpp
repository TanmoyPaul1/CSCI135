//This code prints out a 10 element array of ints
//The user is then able to edit individual elements
//after which the array is printed again
//It fails when an index is inputted that is out of bounds

#include <iostream>

int main()
{
	int myData[10];
	for (int n = 0; n < 10; n++) //prints array with all elements as 1
	{
		myData[n] = 1;
		std::cout << myData[n] << " ";
	}
	int i;
	std::cout << "\nEnter an index: ";
	std::cin >> i;
	int v;
	std::cout << "Enter its value: ";
	std::cin >> v;
	while (i >= 0 && i < 10) //checks inputted index boundary
	{
		myData[i] = v;
		for (int n = 0; n < 10; n++) //prints out edited array
		{
			std::cout << myData[n] << " ";
		}
		std::cout << "\nEnter an index: "; //user enters next index and element
		std::cin >> i;
		std::cout << "Enter its value: ";
		std::cin >> v;
	}
	std::cout << "Index out of range. Exit.\n";
}