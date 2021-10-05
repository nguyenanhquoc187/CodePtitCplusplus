#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
	string masv="B20DCCN",name,lop,date;
	float point;
};
string chuyendoi (int n) {
    string s="";
    while (n>0) {
        s=s+ (char) ( (n%10) + 48);
        n/=10;
    }
    reverse(s.begin(), s.end());
    return s;
}
void nhap(SinhVien ds[], int N) {
    for (int i=1;i<=N;i++) {
       cin.ignore(10000, '\n');
    	getline(cin,ds[i].name);
    	cin>>ds[i].lop>>ds[i].date>>ds[i].point;
    }
}
void chuanhoa(string &s) {
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
void process(SinhVien ds[],int N) {
    for (int i=1;i<=N;i++) {
        if (i<=9) ds[i].masv=ds[i].masv+ "00" + (char) (i+48); else {
            string s=chuyendoi(i);
            ds[i].masv= ds[i].masv+ "0" + s;
        }
        chuanhoa(ds[i].name);
        if (ds[i].date[2]!='/') ds[i].date.insert(0,"0");
        if(ds[i].date[5]!='/') ds[i].date.insert(3,"0");

    }
}
void sapxep(SinhVien a[], int n) {
    process(a,n);
    for (int i=1;i<n;i++) {
        for (int j=i+1;j<=n;j++) if (a[i].point < a[j].point) swap(a[i],a[j]);
    }
}
void in(SinhVien ds[],int N) {
	for (int i=1;i<=N;i++) {
        cout<<ds[i].masv<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<ds[i].date<<" ";
    	cout << fixed << setprecision(2)<<ds[i].point<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}