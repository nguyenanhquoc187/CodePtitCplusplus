#include <bits/stdc++.h>
using namespace std;
void in()
{
    int n;
    cin >> n;
    int a[n][n];
    int b[100001];
    set<int> c;
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (b[a[i][j]] == i)
            {
                b[a[i][j]] += 1;
            }
            if (b[a[i][j]] == n)
            {
                c.insert(a[i][j]);
            }
        }
    }
    cout << c.size();
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        in();
        cout << endl;
    }
}