/*
Author: Tanmoy Paul
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 2 Task A

The computer will generate a random 
number in a a given interval.
The user will keep guessing numbers 
with the given hints of too big or small. 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    //Enter the left end and right end of a range of integers.
    int lower, higher, guess;
    std::cout << "Enter the lower bound: ";
    std::cin >> lower;
    std::cout << "Enter the higher bound: ";
    std::cin >> higher;
    //Making sure bounds are usable. 
    while (lower>=higher)
    {
        std::cout << "Bounds invalid, re-enter:\n";
        std::cout << "Enter the lower bound: ";
        std::cin >> lower;
        std::cout << "Enter the lower bound: ";
        std::cin >> higher;
    }
    //Computer generates a random integer in the range.
    srand((unsigned)time(0));
    int random = rand() % higher + lower;
    std::cout << "\nEnter your guess: ";
    std::cin >> guess;

    //User makes a guess and computer will give feedback.
    //Based on the feedback user will continue to enter 
    //guesses until the guess equals the answer.
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
    //Output when guess is correct. 
    std::cout << "Your guess is correct.\n";
    return 0;
}