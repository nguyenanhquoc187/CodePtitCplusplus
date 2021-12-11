#include<bits/stdc++.h>
using namespace std;
#define a() a;
class SinhVien {
private:
    string masv="B20DCCN001",name,lop,date;
	double point;
public:
    SinhVien() {};
    void ChuanHoa() {
        while (name[0]== ' ') {
		    name.erase(0,1);
	    }
	    while( name[ name.size() - 1 ] ==' ' ) name.erase(name.size() - 1,1);
	    for (int i=0;i<name.size();i++) {
	    	if (name[i]== ' ' && name[i+1]==' ') {
		    	name.erase(i,1);
		    	i--;
	    	}
	    }
        transform(name.begin(),name.end(),name.begin(),::tolower);
        name[0]-=32;
        for (int i=1;i<name.size();i++) if (name[i]==' ') name[i+1]-=32;
    }
    friend istream &operator >> (istream &in, SinhVien &a) {
        getline(cin,a.name);
	    cin>>a.lop>>a.date>>a.point;
        a.ChuanHoa();
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