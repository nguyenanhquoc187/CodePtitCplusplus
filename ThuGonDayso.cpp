#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    int check;
    while (1)
    {
        if (check == 1)
            break;
        check = 1;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if ((a[i] + a[i + 1]) % 2 == 0)
            {
                check = 0;
                a.erase(a.begin() + i, a.begin() + i + 2);
            }
        }
    }
    cout << a.size();
}