#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a numerator: ";
    int num;
    cin >> num;

    cout << "Enter a denominator: ";
    int num2;
    cin >> num2; //TODO

    if (num2 == 0)
    {
        cout << "denominator cannot be zero.";
        return 1;
    }

    cout << "The quotient is " << num / num2;
    //Integer division num / num2,
    //suppose num is 5 and num2 is 2,
    //then quotient is like to divide 5 pens
    //among two students, find out
    //how many pens each student gets.
    //a pen cannot be divided.

    return 0;
}