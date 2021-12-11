#include<bits/stdc++.h>
using namespace std;
class SinhVien {
private:
    string masv="B20DCCN",name,lop,date;
	float point;
public:
    static int j;
    void chuanhoa( string &s ) {
        while (s[0]== ' ') {
            s.erase(0,1);
        }
        while( s[ s.size() - 1 ] ==' ' ) s.erase(s.size() - 1,1);
        for (int i=0;i<s.size();i++) {
            if (s[i]== ' ' && s[i+1]==' ') {
                s.erase(i,1);
                i--;
            }
        }
        transform(s.begin(), s.end(),s.begin(), ::tolower );
        if (s[0] >='a' && s[0] <='z') s[0]-=32;
        for (int i=1;i<s.size();i++) if (s[i]==' ' && s[i+1] >='a' && s[i+1] <='z' ) s[i+1]-=32;
    }
    friend istream &operator >> (istream &in, SinhVien &ds)  {
        cin.ignore();
    	getline(cin,ds.name);
    	cin>>ds.lop>>ds.date>>ds.point;
    	while (ds.date.size() <10) {
	    	if (ds.date[2]!='/') ds.date.insert(0,"0");
	    	if(ds.date[5]!='/') ds.date.insert(3,"0");
	    }
        ds.chuanhoa(ds.name);
        return in; 
    } 
    friend ostream &operator << (ostream &out, SinhVien ds) {
        if (ds.j<=9) ds.masv+="00"; else ds.masv+="0";
        cout<<ds.masv<<SinhVien::j<<" "<<ds.name<<" "<<ds.lop<<" "<<ds.date<<" ";
    	cout << fixed << setprecision(2)<<ds.point<<endl;
        ds.j++;
        return out;
    }
};
int SinhVien::j=1;
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}