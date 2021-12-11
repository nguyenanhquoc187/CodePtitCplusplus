#include<bits/stdc++.h>
using namespace std;
#define a() a;
class NhanVien {
private:
    string name,date,manv="00001",gender,address,mathue,datehd;
public:
    friend istream &operator >> (istream &in, NhanVien &a) {
        getline(cin,a.name);
        cin>>a.gender;
        cin>> a.date;
        cin.ignore();
        getline (cin, a.address);
        cin>>a.mathue;
        cin>> a.datehd;
        return in;
    }
    friend ostream &operator << (ostream &out, NhanVien a) {
        cout<<a.manv<<" "<<a.name<<" "<<a.gender<<" ";
	    cout<<a.date<<" "<<a.address<<" "<<a.mathue<<" "<<a.datehd;
        return out;
    }
};
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
