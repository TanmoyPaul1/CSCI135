#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cout << s1 << " space " << s2 << endl;

    while (true) {
        cout << s1 << " space " << s2 << endl;

        cin >> s1 >> s2;
        if (s1 == "quit" && s2 == "quit") break;
        cout << "Read " << "\"" << s1 << "\"" << " and " << "\"" << s2 << "\" -> ";
        s1 = s1 + s2;
        s2 = "";
        sort(s1.begin(), s1.end());
        for (int i = 0; i < s1.length(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (i != j)
                {
                    if (s1.at(i) == s1.at(j))
                    {
                        s2=s1.substr(0,j-1)+s1.substr(j+1);
                    }
                }
            }
        }
        cout << s1 << " space " << s2 << endl;
    }
    cout << "Bye..." << endl;
    return 0;
}