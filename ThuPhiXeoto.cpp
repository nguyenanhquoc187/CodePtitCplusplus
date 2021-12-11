#include <bits/stdc++.h>
using namespace std;
struct PhuongTine
{
    string code, loaixe, huongdi, ngay;
    int ghe;
};

void nhap(PhuongTine &a)
{
    cin >> a.code >> a.loaixe >> a.ghe >> a.huongdi >> a.ngay;
}

void ina(PhuongTine a[], int n)
{
    map<string, int> map;
    for (int i = 0; i < n; i++)
    {
        if (a[i].huongdi == "IN")
        {
            if (a[i].loaixe == "Xe_con")
            {
                if (a[i].ghe == 5)
                    map[a[i].ngay] += 10000;
                if (a[i].ghe == 7)
                    map[a[i].ngay] += 15000;
            }
            if (a[i].loaixe == "Xe_tai")
            {
                map[a[i].ngay] += 20000;
            }
            if (a[i].loaixe == "Xe_khach")
            {
                if (a[i].ghe == 29)
                    map[a[i].ngay] += 50000;
                if (a[i].ghe == 45)
                    map[a[i].ngay] += 70000;
            }
        }
    }
    for (auto x : map)
    {
        cout << x.first << ": " << x.second;
        cout << endl;
    }
}

main()
{
    struct PhuongTine a[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(a[i]);
    ina(a, N);
    return 0;
}
