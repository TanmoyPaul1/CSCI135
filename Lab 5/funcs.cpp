#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d)
{
	if (n % d == 0)
	{
		return true;
	}
	return false;
}

//checks if a number is prime
bool isPrime(int n)
{
	if (n >= 2) 
	{
		for (int i = 2; i < n; i++ ) 
		{
			if (isDivisibleBy(n, i))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

//returns the smallest prime greater than n
int nextPrime(int n)
{
	do {
		n++;
	} while (!isPrime(n));
	return n;
}

//returns the number of prime numbers in the interval 
int countPrimes(int a, int b)
{
	int num = 0;
	while (a <= b) {
		if (isPrime(a)) {
			num++;
		}
		a++;
	}
	return num;
}

//determines whether or not its argument is a twin prime
//N is called a twin prime if either N-2 or N+2 is also a prime
bool isTwinPrime(int n)
{
	if (!isPrime(n)) {
		return false;
	}
	if (isPrime(n - 2) || isPrime(n + 2))
	{
		return true;
	}
	return false;
}

//returns the smallest twin prime greater than n
int nextTwinPrime(int n)
{
	do
	{
		n++;
	} while (!isTwinPrime(n));
	return n; 
}

//returns the largest twin prime in the range a to b
int largestTwinPrime(int a, int b)
{
	do {
		if (isTwinPrime(b)) {
			return b;
		}
		b--;
	} while (b >= a);
	return -1;
}