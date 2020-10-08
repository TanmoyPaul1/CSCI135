/*
Author: Tanmoy Paul
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 2 Task B

The user will give an int in the inputted interval.
The computer will keep guessing the middle number of 
the interval based on feedback until answer is given. 
*/

#include <iostream>

int main()
{
    //User enters the left and right bounds of integers.
    int lower, higher, guess, answer, feedback;
    std::cout << "Enter the lower bound: ";
    std::cin >> lower;
    std::cout << "Enter the higher bound: ";
    std::cin >> higher;
    //User chooses an integer in that range.
    std::cout << "Enter the answer: ";
    std::cin >> answer;
    //Checks for answer within range. 
    while(answer<lower || answer>higher)
    {
        std::cout << "Answer invalid, re-enter: ";
        std::cin >> answer;
    }
    //Computer makes a guess that equals the middle of the range.
    guess = (higher + lower)/2;
    std::cout << "The guess is: " << guess << std::endl;

    //User gives a feedback for each guess. 
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
        //Computer guess is altered based on feedback. 
        guess = (higher + lower) / 2;
        std::cout << "\nThe new guess is: " << guess << std::endl;
    }
    //The game ends when the computer makes a correct guess.
    std::cout << "The guess is correct.\n";
    return 0;
}