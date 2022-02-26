#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy") {
	CHECK(isDivisibleBy(5, 2) == 0);
	CHECK(isDivisibleBy(8, 4) == 1);
	CHECK(isDivisibleBy(10, 3) == 0);
	CHECK(isDivisibleBy(12, 3) == 1);
	CHECK(isDivisibleBy(15, 6) == 0);
}

TEST_CASE("isPrime") {
	CHECK(isPrime(1) == 0);
	CHECK(isPrime(2) == 1);
	CHECK(isPrime(-3) == 0);
	CHECK(isPrime(4) == 0);
	CHECK(isPrime(5) == 1);
}
TEST_CASE("nextPrime") {
	CHECK(nextPrime(2) == 3);
	CHECK(nextPrime(3) == 5);
	CHECK(nextPrime(5) == 7);
	CHECK(nextPrime(8) == 11);
	CHECK(nextPrime(12) == 13);
}
TEST_CASE("countPrimes") {
	CHECK(countPrimes(0, 1) == 0);
	CHECK(countPrimes(2, 3) == 2);
	CHECK(countPrimes(4, 6) == 1);
	CHECK(countPrimes(5, 11) == 3);
	CHECK(countPrimes(6, 18) == 4);
}
TEST_CASE("isTwinPrime") {
	CHECK(isTwinPrime(2) == 0);
	CHECK(isTwinPrime(7) == 1);
	CHECK(isTwinPrime(19) == 1);
	CHECK(isTwinPrime(23) == 0);
	CHECK(isTwinPrime(29) == 1);
}
TEST_CASE("nextTwinPrime") {
	CHECK(nextTwinPrime(2) == 3);
	CHECK(nextTwinPrime(7) == 11);
	CHECK(nextTwinPrime(19) == 29);
	CHECK(nextTwinPrime(23) == 29);
	CHECK(nextTwinPrime(29) == 31);
}
TEST_CASE("largestTwinPrime") {
	CHECK(largestTwinPrime(0, 3) == 3);
	CHECK(largestTwinPrime(2, 4) == 3);
	CHECK(largestTwinPrime(8, 10) == -1);
	CHECK(largestTwinPrime(9, 20) == 19);
	CHECK(largestTwinPrime(15, 30) == 29);
}
