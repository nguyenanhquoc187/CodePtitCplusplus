#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string ten, workday;
    long long salary, day, thunhap, salary1, bonus1;
    double bonus;
};
NhanVien a;
main()
{
    getline(cin, a.ten);
    cin >> a.salary >> a.day >> a.workday;
    if (a.day >= 25)
        a.bonus = 0.2;
    else if (22 <= a.day && a.day < 25)
        a.bonus = 0.1;
    else
        a.bonus = 0;
    if (a.workday == "PGD")
        a.bonus1 = 200000;
    else if (a.workday == "TP")
        a.bonus1 = 180000;
    else if (a.workday == "NV")
        a.bonus1 = 150000;
    else
        a.bonus1 = 250000;
    a.salary1 = a.day * a.salary;
    a.thunhap = a.salary1 + a.salary1 * a.bonus + a.bonus1;
    cout << "NV01"
         << " " << a.ten << " " << a.salary1 << " " << a.salary1 * a.bonus << " " << a.bonus1 << " " << a.thunhap;
}
