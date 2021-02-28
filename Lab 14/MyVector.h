#pragma once

template <class T> 
class MyVector{
public:
    MyVector(int length);
    int size();
    int capacity();
    bool empty();
    void push_back(T item);
    void pop_back(int n);
    void pop_back();
    void clear();
    T &operator[] (int i);
    
private:
    int length = 0;
    int cap = 2;
    T* v;
};

#include "MyVector.cxx"