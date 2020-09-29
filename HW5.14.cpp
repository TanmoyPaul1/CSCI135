//Write a function void sort2(int& a, int& b) that swaps the values of a 
//and b if a is greater than b otherwise leaves a and b unchanged.

#include <iostream>

void sort2(int &a, int &b) {
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
}