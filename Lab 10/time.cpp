#include <iostream>
#include "timeslot.h"
#include <string>

std::string printTime(Time time)
{
    std::string s = std::to_string(time.h) + ":";
    if(std::to_string(time.m).length() == 1)
    {
        return s + '0' + std::to_string(time.m);
    }
    return s + std::to_string(time.m);
}

int minutesSinceMidnight(Time time)
{
    return (time.h * 60 + time.m);
}

int minutesUntil(Time earlier, Time later)
{
    return minutesSinceMidnight(later) - minutesSinceMidnight(earlier);
}

Time addMinutes(Time time0, int min)
{
    time0.m += min;
    while(time0.m > 59)
    {
        time0.m -= 60;
        time0.h++;
    }
    if (time0.h > 23)
    {
        time0.h -= 24;
    }
    else if (time0.h < 0)
    {
        time0.h += 24;
    }
    return time0;
}

std::string printMovie(Movie mv)
{
    std::string g = mv.title;
    switch (mv.genre)
    {
    case ACTION:
        g += " ACTION";
        break;
    case COMEDY:
        g += " COMEDY";
        break;
    case DRAMA:
        g += " DRAMA";
        break;
    case ROMANCE:
        g += " ROMANCE";
        break;
    case THRILLER:
        g += " THRILLER";
        break;
    }
    g = g + " (" + std::to_string(mv.duration) + " min)";
    return g;
}

std::string getTimeSlot(TimeSlot ts)
{
    Time time = addMinutes(ts.startTime, ts.movie.duration);
    return printMovie(ts.movie) + " [starts at " + printTime(ts.startTime) + ", ends by " + printTime(time) + "]";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie)
{
    Time nextStartTime = addMinutes(ts.startTime, ts.movie.duration);
    TimeSlot next = {nextMovie, nextStartTime};
    return next;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2)
{
    int time1 = minutesSinceMidnight(ts1.startTime);
    int time2 = minutesSinceMidnight(ts2.startTime);
    if(time2 - time1 > 0)
    {
        time1 += ts1.movie.duration;
        return (time1 > time2);
    }
    else
    {
        time2 += ts2.movie.duration;
        return (time2 > time1);
    }
    return false;
}