#include<bits/stdc++.h>
using namespace std;
class SinhVien {
public:
    string masv,name,lop,email;
    friend istream &operator >> (istream &in, SinhVien &a) {
        cin >> a.masv;
        cin.ignore();
        getline(cin,a.name);
        cin >> a.lop >> a.email;
        return in;
    }
    friend ostream &operator << (ostream &out, SinhVien a) {
        cout<<a.masv<<" "<<a.name <<" " <<a.lop <<" " << a.email << endl;
        return out;
    }
};
bool cmp (SinhVien a, SinhVien b) {
    return a.masv < b.masv;
}
int main () {
    int n,q;
    cin >> n;
    SinhVien a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    cin >> q;

    for (int i=0;i<q;i++) {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s <<":" <<endl;
        for (int j=0;j<n;j++) {
            if (a[j].lop==s) cout<<a[j];
        }
    }
}
