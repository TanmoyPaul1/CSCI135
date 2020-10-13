#include <iostream>
using namespace std;
int main()
{
    int mon, day, totalDays = 0;
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (true)
    {
        totalDays = 0;
        cout << "Enter date: ";
        cin >> mon >> day;
        if (!mon && !day)
            break;
        else
        {
            if (mon == 1)
                totalDays = day;
            else
            {
                for (int i = 1; i < mon; i++)
                {
                    totalDays += days[i];
                }
                totalDays += day;
            }
            cout << totalDays << " ";
            switch (totalDays % 7)
            {
            case 0:
                cout << "Tue";
                break;
            case 1:
                cout << "Wed";
                break;
            case 2:
                cout << "Thu";
                break;
            case 3:
                cout << "Fri";
                break;
            case 4:
                cout << "Sat";
                break;
            case 5:
                cout << "Sun";
                break;
            case 6:
                cout << "Mon";
                break;
            }
            cout << "\n";
        }
    }
    cout << "Bye..." << endl;
    return 0;
}