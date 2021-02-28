#include <iostream>
#include "profile.h"
#include "network.h"

int main() {

    std::cout << "\nTask A: \n" << std::endl;

    Profile p1("marco", "Marco");    
    std::cout << p1.getUsername() << std::endl; // marco
    std::cout << p1.getFullName() << std::endl; // Marco (@marco)

    p1.setDisplayName("Marco Rossi"); 
    std::cout << p1.getUsername() << std::endl; // marco
    std::cout << p1.getFullName() << std::endl; // Marco Rossi (@marco)
    
    Profile p2("tarma1", "Tarma Roving");    
    std::cout << p2.getUsername() << std::endl; // tarma1
    std::cout << p2.getFullName() << std::endl; // Tarma Roving (@tarma1)


    std::cout << "\nTask B: \n" << std::endl;

    Network nw;
    std::cout << nw.addUser("mario", "Mario") << std::endl;     // true (1)
    std::cout << nw.addUser("luigi", "Luigi") << std::endl;     // true (1)
    std::cout << nw.addUser("mario", "Mario2") << std::endl;    // false (0)
    std::cout << nw.addUser("mario 2", "Mario2") << std::endl;  // false (0)
    std::cout << nw.addUser("mario-2", "Mario2") << std::endl;  // false (0)
    std::cout << nw.addUser("yoshi", "Yoshi") << std::endl;     // false (1)

    std::cout << "\nTask C: \n" << std::endl;

    std::cout << nw.follow("mario", "luigi") << std::endl; // true (1)
    std::cout << nw.follow("luigi", "mario") << std::endl; // true (1)
    std::cout << nw.follow("luigi", "yoshi") << std::endl; // true (1)
    std::cout << nw.follow("yoshi", "mario") << std::endl; // true (1)
    std::cout << nw.follow("mario2", "luigi") << std::endl; // false (0)

    // add a user who does not follow others
    nw.addUser("wario", "Wario");

    std::cout << "\n";

    // printDot function
    nw.printDot();
    std::cout << "\n";
}
