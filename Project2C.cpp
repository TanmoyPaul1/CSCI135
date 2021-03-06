/*
Author: Tanmoy Paul
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 2 Task C

The user will give an int in the inputted interval.
The computer will keep guessing a random number in 
the interval based on feedback until answer is given. 
The interval is changed based on feedback. 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    //Enter the left end and right end of a range of integers. 
    int lower, higher, guess, answer, feedback;
    std::cout << "Enter the lower bound: ";
    std::cin >> lower;
    std::cout << "Enter the higher bound: ";
    std::cin >> higher;
    //Checks for valid bounds.
    while (higher < lower)
    {
        std::cout << "Bounds are invalid, re-enter: \n";
        std::cout << "Enter the lower bound: ";
        std::cin >> lower;
        std::cout << "Enter the higher bound: ";
        std::cin >> higher;
    }
    //User chooses an integer in that range.
    std::cout << "Enter the answer: ";
    std::cin >> answer;
    //Checks for answer within range.
    while (answer < lower || answer > higher)
    {
        std::cout << "Answer invalid, re-enter: ";
        std::cin >> answer;
    }
    //Computer makes a random guess in the range.
    srand((unsigned)time(0));
    guess = (rand() % (higher-lower+1)) + lower;
    std::cout << "The guess is: " << guess << std::endl;

    //User gives a feedback for each guess.
    while (guess != answer && lower != higher)
    {
        std::cout << "Enter only 1(too big) or 2(too small) or 3(just right): ";
        std::cin >> feedback;
        //Checks feedback value.
        while (feedback < 1 || feedback > 3)
        {
            std::cout << "Feedback invalid, re-enter: ";
            std::cin >> feedback;
        }
        if (feedback == 1)
        {
            std::cout << "Guess was too big";
            higher = guess - 1;
        }
        else if (feedback == 2)
        {
            std::cout << "Guess was too small";
            lower = guess + 1;
        }
        else if (feedback == 3)
        {
            //The game ends when the computer makes a correct guess.
            if (guess != answer)
            {
                std::cout << "You are wrong, the guess is not correct.\n";
            }
            else
            {
                std::cout << "The guess is correct.\n";
            }
        }
        //Computer guess range is altered based on feedback.
        guess = (rand() % (higher - lower + 1)) + lower;
        std::cout << "\nThe new guess is: " << guess << std::endl;
    }
    //The game ends when the computer makes a correct guess.
    if (guess == answer)
    {
        std::cout << "The guess is correct.\n";
    }
    else
    {
        std::cout << "You have given wrong input somewhere. Code Terminated.\n";
    }
    return 0;
}