//Enter the left end and right end of a range of integers. User chooses an integer in that range. 
//Computer makes a guess that equals the mid of the range. User gives a feedback for each guess:
//1 for too big, 2 for too small and 3 for just right. When the feedback is 1 (too big), the 
//computer throws away any integer that is bigger than guess. When the feedback is 2 (too small),
//the computer discards the integers any integers that is smaller than the guess. When computer 
//makes a correct guess, the game ends.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int lower, higher, guess, answer, feedback;
    std::cout << "Enter the lower bound: ";
    std::cin >> lower;
    std::cout << "Enter the higher bound: ";
    std::cin >> higher;
    std::cout << "Enter the answer: ";
    std::cin >> answer;
    while(answer<lower || answer>higher)
    {
        std::cout << "Answer invalid, re-enter: ";
        std::cin >> answer;
    }

    srand((unsigned)time(0));
    guess = (rand() % higher) + lower;
    std::cout << "The guess is: " << guess << std::endl;

    while(guess != answer)
    {
        std::cout << "Enter 1(too big) or 2(too small): ";
        std::cin >> feedback;

        if (feedback == 2)
        {
            std::cout << "Guess was too small";
            lower = guess;
        }
        if (feedback == 1)
        {
            std::cout << "Guess was too big";
            higher = guess;
        }
        guess = (rand() % higher) + lower;
        std::cout << "\nThe new guess is: " << guess << std::endl;
    }
    std::cout << "The guess is correct.\n";
    return 0;
}