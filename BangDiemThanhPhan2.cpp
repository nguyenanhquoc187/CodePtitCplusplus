#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{   
    string masv,name,lop;
    double d1,d2,d3;
};
int main () {
    int n;
    cin>>n;
    SinhVien a[100];
    for (int i=1;i<=n;i++) {
        cin>>a[i].masv;
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].lop>>a[i].d1>>a[i].d2>>a[i].d3;
    }
    for (int i=1;i<n;i++) {
        for (int j=i+1;j<=n;j++) if (a[i].name > a[j].name) swap(a[i],a[j]);
    }
    for (int i=1;i<=n;i++) {
        cout<<i<<" "<<a[i].masv<<" "<<a[i].name<<" "<<a[i].lop<<" "<<fixed<<setprecision(1)<<a[i].d1<<" "<<a[i].d2<<" "<<a[i].d3<<endl;
        // cout<<fixed;
        // cout<<setprecision(1)<<a[i].d1<<" "<<a[i].d2<<" "<<a[i].d3;
        // cout<<endl;
    }
}