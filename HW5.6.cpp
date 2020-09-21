//Write a function  string middle(string str)  that returns a string 
//containing the middle character in str if the length of str is odd
//or the two middle characters if the length is even. For example, 
//middle("middle") returns "dd".

#include <iostream>
#include <string>

std::string middle(std::string str) {
	int size = str.length();
	if (size % 2 == 0) {
		std::string mid = str.substr((size / 2) - 1, 2);
		return mid;
	}
	if (size % 2 == 1) {
		std::string mid = str.substr((size / 2), 1);
		return mid;
	}
	return "";
}
int main()
{
	std::cout << "Enter a word: ";
	std::string str;
	std::cin >> str;
	str = middle(str);
	std::cout << str << std::endl; 
}
