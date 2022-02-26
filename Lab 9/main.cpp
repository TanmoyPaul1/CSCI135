#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main()
{
    std::cout << "\nTask A:\n" << std::endl;

    std::cout << length(&pointA) << std::endl; 
    std::cout << length(&pointB) << std::endl; // 17.3205
    std::cout << length(&pointC) << std::endl; // 37.4166

    std::cout << "\nTask B:\n" << std::endl;
    
    std::cout << "Address of A: " << &pointA << std::endl;
    std::cout << "Address of B: " << &pointB << std::endl;
    Coord3D *ans1 = fartherFromOrigin(&pointA, &pointB);
    std::cout << "ans1 = " << ans1 << std::endl;

    std::cout << "Address of B: " << &pointB << std::endl;
    std::cout << "Address of C: " << &pointC << std::endl;
    Coord3D *ans2 = fartherFromOrigin(&pointB, &pointC);
    std::cout << "ans2 = " << ans2 << std::endl;

    std::cout << "Address of C: " << &pointC << std::endl;
    std::cout << "Address of D: " << &pointD << std::endl;
    Coord3D *ans3 = fartherFromOrigin(&pointC, &pointD);
    std::cout << "ans3 = " << ans3 << std::endl;

    std::cout << "\nTask C:" << std::endl;

    std::cout << "\nvel1: " << std::endl;
    move(&pointA, &vel1, 0); 
    std::cout << pointA.x << " " << pointA.y << " " << pointA.z << std::endl;
    move(&pointB, &vel1, 1);
    std::cout << pointB.x << " " << pointB.y << " " << pointB.z << std::endl;
    move(&pointC, &vel1, 2);
    std::cout << pointC.x << " " << pointC.y << " " << pointC.z << std::endl;

    std::cout << "\nvel2: " << std::endl;
    move(&pointA, &vel2, 0);
    std::cout << pointA.x << " " << pointA.y << " " << pointA.z << std::endl;
    move(&pointB, &vel2, 1);
    std::cout << pointB.x << " " << pointB.y << " " << pointB.z << std::endl;
    move(&pointC, &vel2, 2);
    std::cout << pointC.x << " " << pointC.y << " " << pointC.z << std::endl;
  
    std::cout << "\nTask E:\n" << std::endl;
    
    Coord3D *ppos = new Coord3D;
    ppos = createCoord3D(1, 1, 2);
    Coord3D *pvel = new Coord3D;
    pvel = createCoord3D(4, 9, 13);
    std::cout << "Initial coordinates: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;
    move(ppos, pvel, 1);
    std::cout << "Coordinates after 1 second: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;
    deleteCoord3D(ppos);
    deleteCoord3D(pvel);

    ppos = createCoord3D(10, 9, 8);
    pvel = createCoord3D(10, 9, 8);
    std::cout << "Initial coordinates: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;
    move(ppos, pvel, 5.0);
    std::cout << "Coordinates after 5 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;
    deleteCoord3D(ppos);
    deleteCoord3D(pvel);

    ppos = createCoord3D(5, 10, 20);
    pvel = createCoord3D(4.5, 4.0, 3.0);
    std::cout << "Initial coordinates: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;
    move(ppos, pvel, 10.0);
    std::cout << "Coordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl << std::endl;
    deleteCoord3D(ppos);
    deleteCoord3D(pvel);
}