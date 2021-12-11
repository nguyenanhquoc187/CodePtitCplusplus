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
int main () {
    int n,q;
    cin >> n;
    SinhVien a[n];
    for (int i=0;i<n;i++) cin >> a[i];
    cin >> q;
        cin.ignore();
    for (int i=0;i<q;i++) {
        string s;
        getline(cin,s);
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << s <<":" <<endl;
        for (int j=0;j<n;j++) {
            if (a[j].lop[0]=='E'&&(a[j].masv[5]=='C'||a[j].masv[5]=='A')) continue;
			if(s[0]==a[j].masv[5]) cout << a[j];
        }
    }
}
