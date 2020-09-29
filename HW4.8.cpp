//Write a program that reads a word and prints 
//each character of the word on a separate line. 

#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter a name: "<<std::endl;
	std::string name;
	std::cin >> name;
	for (int i = 0; i < name.length(); i++) {
		std::cout << name.substr( i, 1) << "\n";
	}
}
