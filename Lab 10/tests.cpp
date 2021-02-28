#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "timeslot.h"

Time time1 = {0, 0};
Time time2 = {8, 45};
Time time3 = {20, 15};
Time time4 = {23, 30};

Movie movie1 = {"Batman", ACTION, 134};
Movie movie2 = {"Neighbors", COMEDY, 155};
Movie movie3 = {"Harry Potter", THRILLER, 218};

TimeSlot ts1 = {movie1, time2};
TimeSlot ts2 = {movie3, time3};
TimeSlot ts3 = {movie2, time4};

TEST_CASE("minutesUntil")
{
    CHECK(minutesUntil(time1, time2) == 525);
    CHECK(minutesUntil(time2, time3) == 690);
    CHECK(minutesUntil(time3, time4) == 195);
}

TEST_CASE("addMinutes / printTime")
{
    Time time11 = addMinutes(time1, 260);
    CHECK(printTime(time11) == "4:20");
    Time time22 = addMinutes(time2, 25);
    CHECK(printTime(time22) == "9:10");
    Time time33 = addMinutes(time3, 600);
    CHECK(printTime(time33) == "6:15");
}

TEST_CASE("getTimeSlot")
{
    CHECK(getTimeSlot(ts1) == "Batman ACTION (134 min) [starts at 8:45, ends by 10:59]");
    CHECK(getTimeSlot(ts2) == "Harry Potter THRILLER (218 min) [starts at 20:15, ends by 23:53]");
    CHECK(getTimeSlot(ts3) == "Neighbors COMEDY (155 min) [starts at 23:30, ends by 2:05]");
}

TEST_CASE("scheduleAfter")
{
    TimeSlot ts11 = scheduleAfter(ts1, movie1);
    CHECK(getTimeSlot(ts11) == "Batman ACTION (134 min) [starts at 10:59, ends by 13:13]");
    TimeSlot ts22 = scheduleAfter(ts11, movie2);
    CHECK(getTimeSlot(ts22) == "Neighbors COMEDY (155 min) [starts at 13:13, ends by 15:48]");
    TimeSlot ts33 = scheduleAfter(ts22, movie3);
    CHECK(getTimeSlot(ts33) == "Harry Potter THRILLER (218 min) [starts at 15:48, ends by 19:26]");
}

TEST_CASE("timeOverlap")
{
    CHECK(timeOverlap(ts1, ts2) == 0);
    CHECK(timeOverlap(ts2, ts3) == 1);
    CHECK(timeOverlap(ts3, ts2) == 1);
}