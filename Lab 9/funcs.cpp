#include <iostream>
#include "coord3d.h"
#include <cmath>

double length(Coord3D *p)
{
    double x = (*p).x, y = (*p).y, z = (*p).z;
    double ans = sqrt(x*x + y*y + z*z);
    return round(ans * 10000) / 10000;
}

Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    double num1 = length(p1);
    double num2 = length(p2);
    return (num1>num2 ? p1 : p2);
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    (*ppos).x += (*pvel).x * dt;
    (*ppos).y += (*pvel).y * dt;
    (*ppos).z += (*pvel).z * dt;
}

Coord3D *createCoord3D(double x, double y, double z)
{
    Coord3D *coor = new Coord3D; 
    *coor = {x, y, z};

    return coor;
}

void deleteCoord3D(Coord3D *p)
{
    delete p;
}