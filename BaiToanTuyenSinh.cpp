#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string code, ten, result;
    double toan, ly, hoa, sum;
};
main()
{
    SinhVien a;
    cin >> a.code;
    cin.ignore(1000, '\n');
    getline(cin, a.ten);
    double x;
    cin >> a.toan >> a.ly >> a.hoa;
    if (a.code.substr(0, 3) == "KV1")
        x = 0.5;
    else if (a.code.substr(0, 3) == "KV2")
        x = 1.0;
    if (a.code.substr(0, 3) == "KV3")
        x = 2.5;
    a.sum = a.toan * 2 + a.ly + a.hoa;
    if (a.sum + x >= 24)
        a.result = "TRUNG TUYEN";
    else
        a.result = "TRUOT";
    cout << a.code << " " << a.ten << " " << x << " " << a.sum << " " << a.result;
}
