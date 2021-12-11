#include <bits/stdc++.h>
using namespace std;
struct giangvien
{
    string a, ten;
    long long salary;
};
giangvien mang;
main()
{
    cin >> mang.a;
    cin.ignore(10000, '\n');
    getline(cin, mang.ten);
    cin >> mang.salary;
    int x;
    long long c;
    if (mang.a[2] == '0')
    {
        x = (mang.a[3] - '0');
    }
    else
        x = stoll(mang.a.substr(2, 3));
    if (mang.a.substr(0, 2) == "HP")
    {
        c = 900000;
    }
    else if (mang.a.substr(0, 2) == "HT")
    {
        c = 2000000;
    }
    else if (mang.a.substr(0, 2) == "GV")
    {
        c = 500000;
    }
    long long k = mang.salary * x + c;
    cout << mang.a << " " << mang.ten << " " << x << " " << c << " " << k;
}