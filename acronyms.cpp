#include <iostream>
#include <string>

int main() {

    std::string userText, LOL, BFF, IDK, JK, TMI, TTYL;
    LOL = "laughing out loud";
    BFF = "best friend forever";
    IDK = "I don't know";
    JK = "just kidding";
    TMI = "too much information";
    TTYL = "talk to you later";

    std::cout << "Enter text: ";
    getline(std::cin, userText);

    if (userText.find("LOL") != std::string::npos)
    {
        userText.replace((userText.find("LOL")), 3, LOL);
    }
    if (userText.find("IDK") != std::string::npos)
    {
        userText.replace((userText.find("IDK")), 3, IDK);
    }
    if (userText.find("TTYL") != std::string::npos)
    {
        userText.replace((userText.find("TTYL")), 4, TTYL);
    }
    if (userText.find("BFF") != std::string::npos)
    {
        userText.replace((userText.find("BFF")), 3, BFF);
    }
    if (userText.find("JK") != std::string::npos)
    {
        userText.replace((userText.find("JK")), 2, JK);
    }
    if (userText.find("TMI") != std::string::npos)
    {
        userText.replace(userText.find("TMI"), 3, TMI);
    }
    std::cout << "Expanded: " << userText << std::endl;
    return 0;
}