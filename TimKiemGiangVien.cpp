#include<bits/stdc++.h>
using namespace std;
class GiangVien {
public:
    string name,bomon,ma="GV",name1,bomon1;
    static int j;
    friend istream &operator >> (istream &in, GiangVien &a) {
        getline(cin,a.name);
        getline(cin,a.bomon);
        a.name1=a.name;
        transform(a.name1.begin(),a.name1.end(),a.name1.begin(), ::tolower);
        if (j<10) a.ma= a.ma + '0' + to_string(j); else a.ma += to_string(j);
        j++;
        a.bomon1=a.bomon[0];
        for (int i=1;i<a.bomon.size();i++) if (a.bomon[i]==' ') a.bomon1 += a.bomon[i+1];
        transform(a.bomon1.begin(),a.bomon1.end(),a.bomon1.begin(), ::toupper);
        return in;
    } 
    friend ostream &operator << (ostream &out, GiangVien a) {
        cout << a.ma << " " << a.name << " " << a.bomon1 << endl;
        return out;
    }
};
int GiangVien::j = 1;
int main () {
    int n;
    cin >> n;
    GiangVien a[n];
    cin.ignore();
    for (int i=0;i<n;i++) cin >> a[i];
    int q;
    cin >> q;
    cin.ignore();
    for (int i=0;i<q;i++) {
        string s;
        getline(cin,s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        for (int i=0;i<n;i++)   if (a[i].name1.find(s) != string::npos) cout<<a[i];
    }
}
