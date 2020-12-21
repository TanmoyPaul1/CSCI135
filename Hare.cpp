/*
Author: Tanmoy Paul
Course: CSCI-135
Instructor: Tong Yi
Assignment: Hare.cpp
*/

#include "Hare.h"
#include <cstdlib> //rand

    Hare::Hare() : length(10)
{
    pattern = new int[length]; //dynamically allocated 10-ints
    int defaultPattern[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    for (int i = 0; i < length; i++)
        pattern[i] = defaultPattern[i];

    position = 0;
}

Hare::Hare(int* pattern, int size, int position) : 
    length(size > 0 ? size : 10)
{


    //this->pattern = new int[this->length];//OK
    (*this).pattern = new int[length]; //OK as well


    if (size > 0)
       for (int i = 0; i < size; i++)
           this->pattern[i] = pattern[i];
    else //size <= 0
    {
        int defaultPattern[] = 
            {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
        for (int i = 0; i < length; i++)
            this->pattern[i] = defaultPattern[i]; 
            //ADD this-> before pattern[i]
    }

    this->position = position; 
}

Hare::~Hare()
{
    delete[] pattern;
    pattern = 0; //set pattern to be nullptr
}

//TODO: implement other member functions of Hare class
int Hare::getPosition() const
{
    return position; 
}

int* Hare::getPattern() const
{
    return pattern;
}

int Hare::getPatternLength() const
{
    return length;
}

void Hare::setPosition(int newPosition)
{
    position = newPosition;
}

void Hare::move()
{
    int index = rand() % length;
    int stepsToMove = pattern[index];
    position += stepsToMove;
}