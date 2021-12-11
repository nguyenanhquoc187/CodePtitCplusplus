#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (s[0] != '0' && s[0] != '8')
        {
            s[1] = '+';
            s[2] = '0';
        }
        else
        {
            if (s[0] == '8')
            {
                s[1] = '0';
                s[0] = '+';
            }
        }
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= '0' && s[i] <= '9')
                cout << s[i];
        cout << endl;
    }
}