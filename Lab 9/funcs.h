#pragma once
#include "coord3d.h"

Coord3D pointA = {0, 0, 1};
Coord3D pointB = {10, 10, 10};
Coord3D pointC = {10, 20, 30};
Coord3D pointD = {-20, 21, -22};
Coord3D vel1 = {5, 5, 5};
Coord3D vel2 = {30, 20, 10};

double length(Coord3D *p);
Coord3D *fartherFromOrigin(Coord3D *p1, Coord3D *p2);
void move(Coord3D *ppos, Coord3D *pvel, double dt);
Coord3D *createCoord3D(double x, double y, double z);
void deleteCoord3D(Coord3D *p);