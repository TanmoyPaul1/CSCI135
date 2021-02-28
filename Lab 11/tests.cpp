#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "profile.h"
#include "network.h"

TEST_CASE("Task A: Profile")
{
    Profile p1("marco", "Marco");
    CHECK(p1.getUsername() == "marco");
    CHECK(p1.getFullName() == "Marco (@marco)");
    p1.setDisplayName("Marco Rossi");
    CHECK(p1.getFullName() == "Marco Rossi (@marco)");
}

TEST_CASE("Task B: Network")
{
    Network nw;
    CHECK(nw.addUser("mario", "Mario") == 1);
    CHECK(nw.addUser("luigi", "Luigi") == 1);
    CHECK(nw.addUser("mario", "Mario") == 0);
    CHECK(nw.addUser("mario 2", "Mario") == 0);
    CHECK(nw.addUser("mario-2", "Mario") == 0);
}

TEST_CASE("Task C:")
{
    Network nw;
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    CHECK(nw.follow("mario", "luigi") == 1);
    CHECK(nw.follow("luigi", "yoshi") == 1);
    CHECK(nw.follow("luigi", "mario") == 1);
    CHECK(nw.follow("yoshi", "yoshi") == 0);
    CHECK(nw.follow("mario", "luigi2") == 0);
    CHECK(nw.follow("wario", "waluigi") == 0);
}