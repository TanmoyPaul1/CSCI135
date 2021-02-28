#include <iostream>
#include "timeslot.h"

int main()
{
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

    std::cout << "\nTime time1: " << printTime(time1);
    std::cout << "\nTime time2: " << printTime(time2);
    std::cout << "\nTime time3: " << printTime(time3);
    std::cout << "\nTime time4: " << printTime(time4);

    std::cout << "\n\nTask A: " << std::endl;
    
    std::cout << "\nminutesUntil(time1, time2):  " << minutesUntil(time1, time2);
    std::cout << "\nminutesUntil(time2, time3):  " << minutesUntil(time2, time3);
    std::cout << "\nminutesUntil(time3, time4):  " << minutesUntil(time3, time4);
    
    std::cout << "\n\nTask B: " << std::endl;

    Time time11 = addMinutes(time1, 260);
    std::cout << "\naddMinutes(time1, 260):  " + printTime(time11);
    Time time22 = addMinutes(time2, 25);
    std::cout << "\naddMinutes(time2, 25):   " + printTime(time22);
    Time time33 = addMinutes(time3, 600);
    std::cout << "\naddMinutes(time3, 600):  " + printTime(time33);

    std::cout << "\n\nTask C: \n" << std::endl;

    std::cout << "getTimeSlot(ts1):  " + getTimeSlot(ts1) << std::endl;
    std::cout << "getTimeSlot(ts2):  " + getTimeSlot(ts2) << std::endl;
    std::cout << "getTimeSlot(ts3):  " + getTimeSlot(ts3) << std::endl;

    std::cout << "\n\nTask D: " << std::endl;

    TimeSlot ts11 = scheduleAfter(ts1, movie1);
    std::cout << "\nscheduleAfter(ts1, movie1):   " + getTimeSlot(ts11) << std::endl;
    TimeSlot ts22 = scheduleAfter(ts11, movie2);
    std::cout << "scheduleAfter(ts11, movie2):  " + getTimeSlot(ts22) << std::endl;
    TimeSlot ts33 = scheduleAfter(ts22, movie3);
    std::cout << "scheduleAfter(ts22, movie3):  " + getTimeSlot(ts33) << std::endl;

    std::cout << "\n\nTask E: \n" << std::endl;
    std::cout << "timeOverlap(ts1, ts2): " << timeOverlap(ts1, ts2) << std::endl;
    std::cout << "timeOverlap(ts2, ts3): " << timeOverlap(ts2, ts3) << std::endl;
    std::cout << "timeOverlap(ts3, ts2): " << timeOverlap(ts3, ts2) << std::endl << std::endl;
    return 0;
}