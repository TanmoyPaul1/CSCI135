#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A")
{
    CHECK(printRange(1, 5) == "1 2 3 4 5");
    CHECK(printRange(-7, 3) == "-7 -6 -5 -4 -3 -2 -1 0 1 2 3");
}

TEST_CASE("Task B")
{
    CHECK(sumRange(1, 5) == 15);
    CHECK(sumRange(-7, 3) == -22);
}

TEST_CASE("Task C")
{
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
    CHECK(sumArray(arr, size) == 43);
    CHECK(sumArray(arr, 5) == 34);
    delete[] arr; // deallocate it
}

TEST_CASE("Task D")
{
    CHECK(isAlphanumeric("ABCD") == 1);
    CHECK(isAlphanumeric("Abcd1234xyz") == 1);
    CHECK(isAlphanumeric("KLMN 8-7-6") == 0);
    CHECK(isAlphanumeric("AB?CD") == 0);
}

TEST_CASE("Task E")
{
    CHECK(nestedParens("") == 1);
    CHECK(nestedParens("((()))") == 1);
    CHECK(nestedParens("(((") == 0);
    CHECK(nestedParens(")(") == 0);
}

TEST_CASE("Task F")
{
    int prices[] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
    CHECK();
    CHECK();
    CHECK();
}