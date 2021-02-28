#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("length")
{
    CHECK(length(&pointA) == 1);
    CHECK(length(&pointB) == 17.3205);
    CHECK(length(&pointC) == 37.4166);
}

TEST_CASE("fartherFromOrigin")
{
    CHECK(fartherFromOrigin(&pointA, &pointB) == &pointB);
    CHECK(fartherFromOrigin(&pointB, &pointC) == &pointC);
    CHECK(fartherFromOrigin(&pointC, &pointD) == &pointC);
}

TEST_CASE("move")
{
    move(&pointB, &vel1, 1);
    move(&pointB, &vel2, 1);
    CHECK(pointB.x == 45);
    CHECK(pointB.y == 35);
    CHECK(pointB.z == 25);

    move(&pointC, &vel1, 2);
    move(&pointC, &vel2, 2);
    CHECK(pointC.x == 80);
    CHECK(pointC.y == 70);
    CHECK(pointC.z == 60);
}

TEST_CASE("createCoord3D")
{
    Coord3D *test = createCoord3D(1.0, 1.0, 2.0);
    CHECK(test->x == 1.0);
    CHECK(test->y == 1.0);
    CHECK(test->z == 2.0);
    test = createCoord3D(4.0, 9.0, 13.0);
    CHECK(test->x == 4.0);
    CHECK(test->y == 9.0);
    CHECK(test->z == 13.0);
}