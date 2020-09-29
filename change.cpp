#include <iostream>

int main() {

    int input, dollars, quarters, dimes, nickels, pennies;
    std::cout << "Enter amount of money in pennies: ";
    std::cin >> input;
    int rem1 = input % 100; 
    int rem2 = rem1 % 25; 
    int rem3 = rem2 % 10; 
    int rem4 = rem3  % 5; 

    if (input > 0) 
    {
        if ((input / 100) > 1)
        {
            dollars = input / 100;
            std::cout << dollars << " dollars\n";
        }
        else if ((input / 100) == 1)
        {
            dollars = input / 100;
            std::cout << dollars << " dollar\n";
        }
        if ((rem1 / 25) > 1)
        {
            quarters = rem1 / 25;
            std::cout << quarters << " quarters\n";
        }
        else if ((rem1 / 25) == 1)
        {
            quarters = rem1 / 25;
            std::cout << quarters << " quarter\n";
        }
        if ((rem2 / 10) > 1)
        {
            dimes = rem2 / 10;
            std::cout << dimes << " dimes\n";
        }
        else if ((rem2 / 10) == 1)
        {
            dimes = rem2 / 10;
            std::cout << dimes << " dime\n";
        }
        if ((rem3 / 5) > 1)
        {
            nickels = rem3 / 5;
            std::cout << nickels << " nickels\n";
        }
        else if ((rem3 / 5) == 1)
        {
            nickels = rem3 / 5;
            std::cout << nickels << " nickel\n";
        }
        if ((rem4 / 1) > 1)
        {
            pennies = rem4 / 1;
            std::cout << pennies << " pennies\n";
        }
        else if ((rem4 / 1) == 1)
        {
            pennies = rem4 / 1;
            std::cout << pennies << " penny\n";
        }
    }
    else
    {
        std::cout << "no change\n";
    }
    return 0;
}