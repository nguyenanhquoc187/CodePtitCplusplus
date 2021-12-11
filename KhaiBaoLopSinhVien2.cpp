#include<bits/stdc++.h>
using namespace std;
#define a() a;
class SinhVien {
private:
    string masv="B20DCCN001",name,lop,date;
	double point;
public:
    SinhVien() {};
    friend istream &operator >> (istream &in, SinhVien &a) {
        getline(cin,a.name);
	    cin>>a.lop>>a.date>>a.point;
    	while (a.date.size() <10) {
		    if (a.date[2]!='/') a.date.insert(0,"0");
		    if(a.date[5]!='/') a.date.insert(3,"0");
	    }
        return in;
    }
    friend ostream &operator << (ostream &out, SinhVien a) {
        cout<<a.masv<<" "<<a.name<<" "<<a.lop<<" "<<a.date<<" ";
	    cout << fixed << setprecision(2)<<a.point;
        return out;
    }
};
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
