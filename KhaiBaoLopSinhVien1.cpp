#include<bits/stdc++.h>
#define a() a;
using namespace std;
struct SinhVien {
	string masv="B20DCCN001",name,lop,date;
	double point;
};
void nhap(SinhVien &a) {
	getline(cin,a.name);
	cin>>a.lop>>a.date>>a.point;
	while (a.date.size() <10) {
		if (a.date[2]!='/') a.date.insert(0,"0");
		if(a.date[5]!='/') a.date.insert(3,"0");
	}
}
void in(SinhVien &a) {
	cout<<a.masv<<" "<<"Nguyen Van A"<<" "<<a.lop<<" "<<a.date<<" ";
	cout << fixed << setprecision(2)<<a.point;
}
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
