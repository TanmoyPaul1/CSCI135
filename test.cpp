#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main() {
    string str1 = "We have seven Continents in the wolrd";
    string str2 = "We have seven Continents in the wolrd";
    str1 = str1 - str2;
    cout << str1 << endl;
    return 0;
}