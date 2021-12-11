#include <bits/stdc++.h>
using namespace std;
string biendoi(string s)
{
    string x = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ('0' <= s[i] && s[i] <= '9')
            continue;
        x += s[i];
    }
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == 'A' || x[i] == 'K')
            x[i] = '0';
        if (x[i] == 'B' || x[i] == 'L')
            x[i] = '1';
        if (x[i] == 'C' || x[i] == 'M')
            x[i] = '2';
        if (x[i] == 'D' || x[i] == 'N')
            x[i] = '3';
        if (x[i] == 'E' || x[i] == 'O')
            x[i] = '4';
        if (x[i] == 'F' || x[i] == 'P')
            x[i] = '5';
        if (x[i] == 'G' || x[i] == 'Q')
            x[i] = '6';
        if (x[i] == 'H' || x[i] == 'R')
            x[i] = '7';
        if (x[i] == 'I' || x[i] == 'S')
            x[i] = '8';
        if (x[i] == 'J' || x[i] == 'T')
            x[i] = '9';
    }
    return x;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, s1;
        cin >> s >> s1;
        for (int i = 0; i < s1.size(); i++)
            s1[i] = toupper(s1[i]);
        s1 = biendoi(s1);
        if (s1 == s)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}