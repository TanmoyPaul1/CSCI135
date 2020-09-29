//Write a function sort3(int& a, int& b, int& c) that swaps its 
//three arguments to arrange them in sorted order.

#include <iostream>

void sort2(int &a, int &b) {
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
}

void sort3(int& a, int& b, int& c)
{
	sort2(a, b);
	sort2(a, c);
	sort2(b, c);
}
