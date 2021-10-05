#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    int stt;
    string masv,ten,lop,email,business;
};
void nhap(SinhVien &a) {
    cin>>a.masv;
    cin.ignore();
    getline(cin,a.ten);
    cin>>a.lop>>a.email>>a.business;
}
void sapxep(SinhVien a[], int n) {
    for (int i=1;i<n;i++) {
        for (int j=i+1;j<=n;j++) if (a[i].masv > a[j].masv) swap(a[i],a[j]);
    }
}
void in(SinhVien a) {
    cout<<a.stt<<" "<<a.masv<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<" "<<a.business;
}
void process(SinhVien a[], int n ) {
    sapxep(a,n);                                  
    int q; string s[6];
    cin>>q;
    for (int i=1;i<=q;i++) {
        cin>>s[i];
        for (int j=1;j<=n;j++) if (s[i]== a[j].business) {
            in(a[j]);
            cout<<endl;
        }
    }
}
int main () {
    int n;
    cin>>n;
    struct SinhVien a[100];
    cin.ignore();
    for (int i=1;i<=n;i++) {
        a[i].stt=i;
        nhap(a[i]);
    }
    
    process(a,n);
}
