#include<bits/stdc++.h>
using namespace std;
class NhanVien {
private:
    string manv,name,date,gender,address,mathue,datehd;
    int day,month,year;
public:
    static int j;
    friend istream &operator >> (istream &in, NhanVien &a) {
        cin.ignore();
        getline(cin,a.name);
        cin>>a.gender>>a.date;
        cin.ignore();
        getline (cin, a.address);
        cin>>a.mathue>>a.datehd;
        if (j<=9) a.manv=a.manv + "0000" + to_string(j); else a.manv= a.manv + "000" + to_string(j);
        j++;
        return in;
    }
    friend ostream &operator << (ostream &out, NhanVien a) {
        cout<<a.manv<<" "<<a.name<<" "<<a.gender<<" "<<a.date<<" "<<a.address<<" "<<a.mathue<<" "<<a.datehd<<endl;
        return out;
    }
};
int NhanVien::j=1;
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
