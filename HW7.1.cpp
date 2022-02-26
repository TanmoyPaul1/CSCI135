//Write a function void sort2(double* p, double* q) that 
//receives two pointers and sorts the values to which they point. 
//If you call sort2(&x, &y) then x <= y after the call.

#include <iostream>

void sort2(double* p, double* q)
{
    if (*p > *q)
    {
        double temp = *p;
        *p = *q;
        *q = temp;
    }
}

int main()
{
    double x = 5.7, y = 3.2;
    double* p = &x;
    double* q = &y;
    std::cout << x << "  " << y << std::endl;
    sort2(p, q);
    std::cout << x << "  " << y << std::endl;
}