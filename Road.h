/*
Author: Tanmoy Paul
Course: CSCI-135
Instructor: Tong Yi
Assignment: Road.h
*/

#pragma once

#ifndef ROAD_H_
#define ROAD_H_
class Road
{
public:
    Road();
    Road(int size);
    ~Road();
    void clear();  // set each char in blocks to be a space
    void mark(int idx, char ch); 
    int getLastBlock() const;
    char* toString() const;
    
private:
    char* blocks;
    //blocks is to represent a consecutive collection of road blocks, 
    //each blocks can be a space.
    //ie, not occupied by any animal,
    //or it can be the paw mark -- represent by the initial
    //letter of animal, for example, 'H' for hare,
    // and 'T' for Tortoise.
    const int length; // Since length is for the size of 
    // array, we only initialize it once, and do not change it afterwards.
};
#endif
