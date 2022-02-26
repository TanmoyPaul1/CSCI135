#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    system("g++ -o n Divide.cpp");
    system("./n");
    // system("clear");
    int random = rand()%1000;
    int random1 = rand() % 1000;
    int random2 = rand() % 1000;
    /* No srand() calls before rand(), so seed = 1*/
    cout << "Seed = 1, Random number = " << random << endl;
    cout << "Seed = 1, Random number = " << random1 << endl;
    cout << "Seed = 1, Random number = " << random2 << endl;
    srand((unsigned)time(0));
    /* Seed = 5 */
    random = rand()%1000;
    cout << "Seed = 5, Random number = " << random << endl;
    random1 = rand() % 1000;
    cout << "Seed = 5, Random number = " << random1 << endl;
    random2 = rand() % 1000;
    cout << "Seed = 5, Random number = " << random2 << endl;

    return 0;
}