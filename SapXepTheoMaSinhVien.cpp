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
    friend ostream &operator << (ostream &out, SinhVien &a) {
        cout<<a.masv<<" "<<a.name <<" " <<a.lop <<" " << a.email;
        return out;
    }
};
bool cmp (SinhVien a, SinhVien b) {
    return a.masv < b.masv;
}
int main () {
    SinhVien b[10001];
    int i=0;
    while (cin >> b[i]) {
        i++;
    }
    sort(b,b+i,cmp);
    for (int j=0;j<i;j++) cout<<b[j]<<endl;
}
