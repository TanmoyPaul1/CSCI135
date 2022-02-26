#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

std::vector<int> v{1, 2, -1, 3, 4, -1, 6};
std::vector<int> v1{1, 2, 3};
std::vector<int> v2{4, 5};
std::vector<int> v3{10, 20, 30};

TEST_CASE("Task A")
{
    std::vector<int> A1 = makeVector(5);
    CHECK(A1 == std::vector<int>{0, 1, 2, 3, 4});

    std::vector<int> A2 = makeVector(10);
    CHECK(A2 == std::vector<int>{0, 1, 2, 3, 4, 5, 6, 7, 8, 9});
}

TEST_CASE("Task B")
{
    std::vector<int> B1 = goodVibes(v);
    CHECK(B1 == std::vector<int>{1, 2, 3, 4, 6});

    std::vector<int> B2 = goodVibes(v1);
    CHECK(B2 == std::vector<int>{1, 2, 3});
}

TEST_CASE("Task D")
{
    std::vector<int> D1 = sumPairWise(v1, v2);
    CHECK(D1 == std::vector<int>{5, 7, 3});

    std::vector<int> D2 = sumPairWise(v2, v3);
    CHECK(D2 == std::vector<int>{14, 25, 30});
}

TEST_CASE("Task C")
{
    gogeta(v1, v2);
    CHECK(v1 == std::vector<int>{1, 2, 3, 4, 5});
    CHECK(v2 == std::vector<int>{});
}