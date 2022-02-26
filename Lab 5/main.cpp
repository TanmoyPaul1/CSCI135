#include <iostream>
#include "funcs.h"

int main()
{
	std::cout << "\nFUNCTION         EXPECTED        ACTUAL\n";

	std::cout << "\nWill print 1 for true, 0 for false\n"; 
	std::cout << "\nisDivisibleBy(5, 2)       0      " << isDivisibleBy(5, 2) << std::endl;
	std::cout << "isDivisibleBy(8, 4)       1      " << isDivisibleBy(8, 4) << std::endl;
	std::cout << "isDivisibleBy(10, 3)      0      " << isDivisibleBy(10, 3) << std::endl;
	std::cout << "isDivisibleBy(12, 3)      1      " << isDivisibleBy(12, 3) << std::endl;
	std::cout << "isDivisibleBy(15, 6)      0      " << isDivisibleBy(15, 6) << std::endl;

	std::cout << "\nisPrime(1)      0      " << isPrime(1) << std::endl;
	std::cout << "isPrime(2)      1      " << isPrime(2) << std::endl;
	std::cout << "isPrime(-3)     0      " << isPrime(-3) << std::endl;
	std::cout << "isPrime(4)      0      " << isPrime(4) << std::endl;
	std::cout << "isPrime(5)      1      " << isPrime(5) << std::endl;

	std::cout << "\nnextPrime(2)      3      " << nextPrime(2) << std::endl;
	std::cout << "nextPrime(3)      5      " << nextPrime(3) << std::endl;
	std::cout << "nextPrime(5)      7      " << nextPrime(5) << std::endl;
	std::cout << "nextPrime(8)      11     " << nextPrime(8) << std::endl;
	std::cout << "nextPrime(12)     13     " << nextPrime(12) << std::endl;

	std::cout << "\ncountPrimes(0, 1)      0      " << countPrimes(0, 1) << std::endl;
	std::cout << "countPrimes(2, 3)      2      " << countPrimes(2, 3) << std::endl;
	std::cout << "countPrimes(4, 6)      1      " << countPrimes(4, 6) << std::endl;
	std::cout << "countPrimes(5, 11)     3      " << countPrimes(5, 11) << std::endl;
	std::cout << "countPrimes(6, 18)     4      " << countPrimes(6, 18) << std::endl;
	
	std::cout << "\nisTwinPrime(2)      0      " << isTwinPrime(2) << std::endl;
	std::cout << "isTwinPrime(7)      1      " << isTwinPrime(7) << std::endl;
	std::cout << "isTwinPrime(19)      1      " << isTwinPrime(19) << std::endl;
	std::cout << "isTwinPrime(23)      0      " << isTwinPrime(23) << std::endl;
	std::cout << "isTwinPrime(29)      1      " << isTwinPrime(29) << std::endl;
	
	std::cout << "\nnextTwinPrime(2)      3      " << nextTwinPrime(2) << std::endl;
	std::cout << "nextTwinPrime(7)      11      " << nextTwinPrime(7) << std::endl;
	std::cout << "nextTwinPrime(19)      29      " << nextTwinPrime(19) << std::endl;
	std::cout << "nextTwinPrime(23)      29      " << nextTwinPrime(23) << std::endl;
	std::cout << "nextTwinPrime(29)      31      " << nextTwinPrime(29) << std::endl;
	
	std::cout << "\nlargestTwinPrime(0, 3)      3      " << largestTwinPrime(0, 3) << std::endl;
	std::cout << "largestTwinPrime(2, 4)      3      " << largestTwinPrime(2, 4) << std::endl;
	std::cout << "largestTwinPrime(8, 10)     -1      " << largestTwinPrime(8, 10) << std::endl;
	std::cout << "largestTwinPrime(9, 20)     19      " << largestTwinPrime(9, 20) << std::endl;
	std::cout << "largestTwinPrime(15, 30)    29      " << largestTwinPrime(15, 30) << std::endl;

	std::cout <<std::endl;
	return 0;
}
