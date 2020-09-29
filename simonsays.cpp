#include <iostream>
#include <string>

int main() {
	std::string simonPattern;
	std::string userPattern;
	int userScore=0;
	std::cin >> simonPattern;
	std::cin >> userPattern;

	for (int i = 0; i < 10; i++)
	{
		if (simonPattern.substr(i, 1) == userPattern.substr(i, 1))
		{
			userScore++;
		}
		else
		{
			break;
		}
	}
	std::cout << "userScore: " << userScore << std::endl;

	return 0;
}