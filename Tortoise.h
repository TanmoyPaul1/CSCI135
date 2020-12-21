/*
Author: Tanmoy Paul
Course: CSCI-135
Instructor: Tong Yi
Assignment: Tortoise.h
*/

#pragma once

#ifndef TORTOISE_H //include guard or header guard
#define TORTOISE_H
class Tortoise
{
public:
    Tortoise();
    //(int* pattern, int length, int position);
    Tortoise(int* , int , int );
    ~Tortoise(); //release dynamically allocated memory,
        //that is, memory allocated through new keyword.

    int getPosition() const;
        
     void setPosition(int newPosition);
       
     int* getPattern() const;
        //return pattern as an array
     int getPatternLength() const;
     void move(); 
         //change the current position, depending on move pattern

private:
    const int length; //the size of an array is const
    int* pattern;
    int position;
}; //do not forget ;
#endif