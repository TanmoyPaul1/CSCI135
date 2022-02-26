//Define a structure Triangle that contains three Point members. 
//Write a function that computes the perimeter of a Triangle. 
//Write a program that reads the coordinates of the points, 
//calls your function, and displays the result.

#include <iostream>
#include <cmath>

struct Point
{
    double x;
    double y;
};

struct Triangle
{
    Point a, b, c;
};

double distance(Point a, Point b)
{
    double dx = b.x - a.x;
    double dy = b.y - a.y;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

double perimeter(Triangle t)
{
    double d1 = distance(t.a, t.b);
    double d2 = distance(t.b, t.c);
    double d3 = distance(t.a, t.c);
    return d1 + d2 + d3;
}

