#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

#include "reservoir.h"

double get_east_storage(std::string date) {
    std::ifstream fin("Current_Reservoir_Levels.tv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(0); // exit if failed to open the file
    }
    std::string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    double eastSt, eastEl, westSt, westEl;

    while (fin >> junk >> eastSt >> eastEl >> westSt >> westEl) {
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        fin.ignore(INT_MAX, '\n'); //skips to the end of line ignoring the remaining columns 

        if (junk == date) {
            std::cout << date << " " << eastSt << " billion gallons" << std::endl;
            return eastSt;
        }
    }
    fin.close();
    // and return the correct value
    return 0;
}

double get_min_east() {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    std::string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    double eastSt, eastEl, westSt, westEl, min= INT_MAX;
    
    while (fin >> junk >> eastSt >> eastEl >> westSt >> westEl) {
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        fin.ignore(INT_MAX, '\n'); //skips to the end of line ignoring the remaining columns 
        if (eastSt < min) {
            min = eastSt;
        }
    }
    std::cout << "The minimum storage in the East basin in 2018 is " << min << std::endl;
    fin.close();
    // and return the correct value
    return min;
}

double get_max_east() {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    std::string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    double eastSt, eastEl, westSt, westEl, max = 0;

    while (fin >> junk >> eastSt >> eastEl >> westSt >> westEl) {
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        fin.ignore(INT_MAX, '\n'); //skips to the end of line ignoring the remaining columns 
        if (eastSt > max) {
            max = eastSt;
        }
    }
    std::cout << "The maximum storage in the East basin in 2018 is " << max << std::endl;
    fin.close();
    // and return the correct value
    return max;
}

std::string compare_basins(std::string date) {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    std::string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    double eastSt, eastEl, westSt, westEl;

    while (fin >> junk >> eastSt >> eastEl >> westSt >> westEl) {
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        if (junk == date) {
            if (eastEl > westEl) {
                std::cout << date << " " << "East" << std::endl;
                return "East";
            }
            else if (eastEl < westEl) {
                std::cout << date << " " << "West" << std::endl;
                return "West";
            }
            else {
                std::cout << date << " " << "Equal" << std::endl;
                return "Equal";
            }
        }
    }
    fin.close();
    // and return the correct value
    return "Failed";
}
