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
        int ok = 0;
        int cnt = 0;
        int m = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '@')
                m++;
        }
        if (m == 0)
            ok = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z') || s[i] == '.' || s[i] == '_' || s[i] == '@' || ('0' <= s[i] && s[i] <= '9'))
                ok == 0;
            else
            {

                ok = 1;
            }
            if (s[i] == ' ')
            {
                ok = 1;
                break;
            }
            if (s[i] == '@')
            {
                cnt++;
                if (cnt >= 2)
                {
                    ok = 1;
                    break;
                }
            }
        }
        int count = 0, x;

        for (int i = 0; s[i] != '@'; i++)
        {
            count++;
            x = i;
        }
        if (count > 64 || count == 0)
            ok = 1;
        int count1 = 0;
        for (int i = x + 2; i < s.size(); i++)
        {
            count1++;
        }
        if (count1 > 254)
            ok = 1;
        int z = 0;
        for (int i = x + 1; i < s.size(); i++)
        {
            if (s[i] == '.')
                z++;
        }
        if (z == 0)
            ok = 1;
        if (s[x + 2] == '.' && ((x + 2) == (s.size() - 1)))
            ok = 1;
        if (s[s.size() - 1] == '.')
            ok = 1;
        if (ok == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}