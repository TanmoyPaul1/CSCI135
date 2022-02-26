/*
Author: Tanmoy Paul
Course: CSCI-135
Instructor: Tong Yi
Assignment: Tortoise.cpp
*/

#include "Tortoise.h"
#include <cstdlib> //rand

Tortoise::Tortoise() : length(10)
{
    pattern = new int[length]; //dynamically allocated 10-ints
    int defaultPattern[] = {3,3,3,3,3,-6,-6,1,1,1};
    for (int i = 0; i < length; i++)
        pattern[i] = defaultPattern[i];

    position = 0;
}

Tortoise::Tortoise(int* pattern, int size, int position) : 
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
            {3,3,3,3,3,-6,-6,1,1,1};
        for (int i = 0; i < length; i++)
            this->pattern[i] = defaultPattern[i]; 
            //ADD this-> before pattern[i]
    }

    this->position = position; 
}

Tortoise::~Tortoise()
{
    delete[] pattern;
    pattern = 0; //set pattern to be nullptr
}

//TODO: implement other member functions of Hare class
int Tortoise::getPosition() const
{
    return position; 
}

int* Tortoise::getPattern() const
{
    return pattern;
}

int Tortoise::getPatternLength() const
{
    return length;
}

void Tortoise::setPosition(int newPosition)
{
    position = newPosition;
}

void Tortoise::move()
{
    int index = rand() % length;
    int stepsToMove = pattern[index];
    position += stepsToMove;
}