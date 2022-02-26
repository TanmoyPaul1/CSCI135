#include <iostream>
#include "MyVector.h"

template <class T>
MyVector<T>::MyVector(int s)
{
    v = new T[s];
    length = s;
    while (length > cap)
        cap = cap * 2;
}

// template <class T>
// MyVector<T>::~MyVector() 
// { 
//     delete v;
// }

template <class T>
int MyVector<T>::size()
{
    return length;
}

template <class T>
int MyVector<T>::capacity()
{
    return cap;
}

template <class T>
bool MyVector<T>::empty()
{
    return (length == 0);
}

template <class T>
void MyVector<T>::push_back(T item)
{
    T* v1 = new T[length + 1];
    for (int i = 0; i < length; i++)
    {
        v1[i] = v[i];
    }
    v1[length] = item;
    length++;
    if (length > cap)
        cap = cap * 2;
    delete[] v;
    v = new T[length + 1];
    v = v1;
}

template <class T>
void MyVector<T>::pop_back()
{
    T *v1 = new T[length - 1];
    for (int i = 0; i < length - 1; i++)
    {
        v1[i] = v[i];
    }
    length--;
    delete[] v;
    v = new T[length + 1];
    v = v1;
}

template <class T>
void MyVector<T>::pop_back(int n)
{
    T *v1 = new T[length - 1];
    int j = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if(i != n)
        {
            v1[j] = v[i];
            j++;
        }
    }
    length--;
    delete[] v;
    v = new T[length + 1];
    v = v1;
}

template <class T>
void MyVector<T>::clear()
{
    v = new T[0];
    length = 0;
    cap = 2;
}

template <class T>
T &MyVector<T>::operator[](int i)
{
    return v[i];
}
