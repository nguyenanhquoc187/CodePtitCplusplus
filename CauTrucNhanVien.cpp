#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name,date,manv="00001",gender,address,mathue,datehd;
};
void nhap(NhanVien &a) {
	getline(cin,a.name);
	cin>>a.gender;
	cin>> a.date;
	cin.ignore();
	getline (cin, a.address);
	cin>>a.mathue;
	cin>> a.datehd;
}
void in(NhanVien &a) {
	cout<<a.manv<<" "<<a.name<<" "<<a.gender<<" ";
	cout<<a.date<<" "<<a.address<<" "<<a.mathue<<" "<<a.datehd;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
