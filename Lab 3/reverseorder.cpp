#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <vector>
#include "reverseorder.h"

void reverse_order(std::string date1, std::string date2) {
    std::ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1); // exit if failed to open the file
    }
    std::string junk;        // new string variable
    getline(fin, junk); // read one line from the file 
    double eastSt, eastEl, westSt, westEl, placeholder = 0; 
    std::vector<double> elevations;
    std::vector<std::string> dates;

    while (fin >> junk >> eastSt >> eastEl >> westSt >> westEl) {
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 

        fin.ignore(INT_MAX, '\n'); //skips to the end of line ignoring the remaining columns 

        if (junk == date1) {
            placeholder = 1;
        }
        if (placeholder == 1) {
            dates.push_back(junk);
            elevations.insert(elevations.begin(), westEl);
        }
        if (junk == date2) {
            placeholder = 2;
        }
    }
    for (int i = dates.size() - 1; i >= 0; i--) {
        std::cout << dates[i] << "  " << elevations[i] << std::endl;
    }
    fin.close();
    return;
}