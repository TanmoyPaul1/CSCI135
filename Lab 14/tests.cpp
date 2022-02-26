#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "MyVector.h"

TEST_CASE("size/capacity/empty")
{
    MyVector<int> v1(0);
    CHECK(v1.size() == 0);
    CHECK(v1.capacity() == 2);
    CHECK(v1.empty() == 1);

    MyVector<int> v2(5);
    CHECK(v2.size() == 5);
    CHECK(v2.capacity() == 8);
    CHECK(v2.empty() == 0);
}

TEST_CASE("push_back/pop_back")
{
    MyVector<int> v1(0);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    CHECK(v1[0] == 5);
    CHECK(v1[1] == 6);

    v1.pop_back();
    CHECK(v1[1] == 6);
    CHECK(v1[2] == 0);
    v1.pop_back(1);
    CHECK(v1[0] == 5);
    CHECK(v1[1] == 0);
}

TEST_CASE("clear/[]")
{
    MyVector<int> v1(0);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    CHECK(v1[2] == 7);
    v1.clear();
    CHECK(v1[0] == 0);
    CHECK(v1[1] == 0);
}