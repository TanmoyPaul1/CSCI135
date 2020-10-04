//Open a file with the name hello.txt. 
//Store the message “Hello, World!” in the file. 
//Close the file. Open the same file again. 
//Read the message into a string variable and print it.

#include <iostream>
#include <fstream>

int main()
{
    std::ofstream stream1("hello.txt");
    stream1 << "Hello, World!";
    stream1.close();
    std::string str = "";
    std::ifstream stream2("hello.txt");
    getline(stream2, str);

    std::cout << str;
    stream2.close();
}