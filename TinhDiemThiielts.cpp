#include <bits/stdc++.h>
using namespace std;
struct point
{
    long long doc, nghe;
    double speak, write, doc1, nghe1;
};
double correct(long long doc)
{
    double doc1;
    if (3 <= doc && doc <= 4)
        doc1 = 2.5;
    else if (5 <= doc && doc <= 6)
        doc1 = 3.0;
    else if (7 <= doc && doc <= 9)
        doc1 = 3.5;
    else if (10 <= doc && doc <= 12)
        doc1 = 4.0;
    else if (13 <= doc && doc <= 15)
        doc1 = 4.5;
    else if (16 <= doc && doc <= 19)
        doc1 = 5.0;
    else if (20 <= doc && doc <= 22)
        doc1 = 5.5;
    else if (23 <= doc && doc <= 26)
        doc1 = 6.0;
    else if (27 <= doc && doc <= 29)
        doc1 = 6.5;
    else if (30 <= doc && doc <= 32)
        doc1 = 7.0;
    else if (33 <= doc && doc <= 34)
        doc1 = 7.5;
    else if (35 <= doc && doc <= 36)
        doc1 = 8.0;
    else if (37 <= doc && doc <= 38)
        doc1 = 8.5;
    else if (39 <= doc && doc <= 40)
        doc1 = 9.0;
    return doc1;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        point ds;
        cin >> ds.doc >> ds.nghe >> ds.speak >> ds.write;
        ds.doc1 = correct(ds.doc);
        ds.nghe1 = correct(ds.nghe);
        double sum = (ds.doc1 + ds.nghe1 + ds.speak + ds.write) / 4;
        string sum1 = to_string(sum);
        if (sum1[2] >= '3' && sum1[2] < '7' || sum1[2] == '2' && sum1[3] >= '5')
        {
            cout << sum1[0] << ".5";
        }
        else if (sum1[2] > '7' || sum1[2] == '7' && sum1[3] >= 7)
        {
            sum1[0]++;
            cout << sum1[0] << ".0";
        }
        else
            cout << sum1[0] << ".0";
        cout << endl;
    }
}