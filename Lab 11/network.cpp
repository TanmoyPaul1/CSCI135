#include "profile.h"
#include "network.h"
#include <iostream>
#include <cctype>

// Returns user ID (index in the 'profiles' array) by their username
// (or -1 if username is not found)
int Network::findID (std::string usrn)
{
    for(int i = 0; i < 20; i++)
    {
        if(profiles[i].getUsername() == usrn)
            return i;
    }
    return -1;
}

// Constructor, makes an empty network (numUsers = 0)
Network::Network()
{
    numUsers = 0;
}

// Attempts to sign up a new user with specified username and displayname
// return true if the operation was successful, otherwise return false
bool Network::addUser(std::string usrn, std::string dspn)
{
    if (findID(usrn) == -1)
    {
        for (int i = 0; i < usrn.length(); i++)
        {
            if(!isalpha(usrn[i]) && !isdigit(usrn[i]))
                return false;
        }
        Profile p(usrn, dspn);
        // std::cout << profiles[1].getUsername();
        for(int i = 0; i < 20; i++)
        {
            if(profiles[i].getUsername() == "")
            {
                profiles[i] = p;
                return true;
            }
        }
    } 
    return false;
}

// Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
// return true if success (if both usernames exist), otherwise return false
bool Network::follow(std::string usrn1, std::string usrn2)
{
    int count = 0, ind1 = -1, ind2 = -1;
    for(int i = 0; i < MAX_USERS; i++)
    {
        if(profiles[i].getUsername() == usrn1)
        {
            ind1 = i;
            count++;
        }
        if(profiles[i].getUsername() == usrn2)
        {
            ind2 = i;
            count++;
        }
    }

    if(count != 2 || usrn1 == usrn2)
    {
        return false;
    }
    
    following[ind1][ind2] = true;
    return true;
}

// Print Dot file (graphical representation of the network)
void Network::printDot()
{
    for(int i = 0; i < MAX_USERS; i++)
    {
        if(profiles[i].getUsername() != "")
        {
            std::cout << "\"@" << profiles[i].getUsername() << "\"" << std::endl;
        }
    }
    std::cout << "\n";

    for(int i = 0; i < MAX_USERS; i++)
    {
        for(int j = 0; j < MAX_USERS; j++)
        {
            if (following[i][j] == true)
            {
                std::cout << "\"@" << profiles[i].getUsername() << "\" -> \"@" << profiles[j].getUsername() << "\"" << std::endl;
            }
        }
    }
}
