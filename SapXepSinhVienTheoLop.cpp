#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
    string masv,name,lop,email;
};
bool cmp (SinhVien a, SinhVien b) {
    if (a.lop == b.lop) return a.masv < b.masv ;
    return a.lop < b.lop;
}
int main () {
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i=0;i<n;i++) {
        cin >> a[i].masv;
        cin.ignore();
        getline(cin,a[i].name);
        cin >> a[i].lop >> a[i].email;
    }
    sort(a,a+n,cmp);
    for (int i=0;i<n;i++) {
        cout<<a[i].masv<<" "<<a[i].name <<" " <<a[i].lop <<" " << a[i].email<<endl;
    }
}
