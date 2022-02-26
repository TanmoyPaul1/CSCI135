//Define a structure Point. A point has an x- and a y-coordinate. 
//Write a function double distance(Point a, Point b) that computes 
//the distance from a to b. Write a program that reads the coordinates 
//of the points, calls your function, and displays the result.

#include <iostream>
#include <cmath>

struct Point
{
    double x;
    double y;
};

double distance(Point a, Point b)
{
    double dx = b.x - a.x;
    double dy = b.y - a.y;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}
