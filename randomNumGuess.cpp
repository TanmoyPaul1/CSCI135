//Enter the left end and right end of a range of integers. 
//Let computer generate a random integer in this range. 
//User makes a guess and computer will give a feedback. 
//The feedback is “too big” when the guess is larger than 
//the answer.  The feedback is “too small” when the guess 
//is smaller than the answer. Based on the feedback, 
//the user will continue to enter a guess until the guess equals the answer.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int lower, higher, guess;
    std::cout << "Enter the lower bound: ";
    std::cin >> lower;
    std::cout << "Enter the higher bound: ";
    std::cin >> higher;
    while (lower>=higher)
    {
        std::cout << "Bounds invalid, re-enter:\n";
        std::cout << "Enter the lower bound: ";
        std::cin >> lower;
        std::cout << "Enter the lower bound: ";
        std::cin >> higher;
    }

    srand((unsigned)time(0));
    int random = rand() % higher + lower;
    std::cout << "\nEnter your guess: ";
    std::cin >> guess;

    while(guess != random)
    {
        if (guess < random)
        {
            std::cout << "too small";
            std::cout << "\nRe-enter your guess: ";
            std::cin >> guess;
        }
        if (guess > random)
        {
            std::cout << "too big";
            std::cout << "\nRe-enter your guess: ";
            std::cin >> guess;
        }
    }
    std::cout << "Your guess is correct.\n";
    return 0;
}