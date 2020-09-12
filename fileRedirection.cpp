#include <iostream>

int main() {
    std:: string s;
    while (std::cin >> s) { // While the reading operation is a success
        std::cout << s << std::endl;  // print the read word
    }
}