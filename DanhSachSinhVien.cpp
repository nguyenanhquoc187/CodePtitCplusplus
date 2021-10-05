#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
	string masv="B20DCCN",name,lop,date;
	double point;
};
void nhap(SinhVien ds[], int N) {
    for (int i=1;i<=N;i++) {
        cin.ignore();
    	getline(cin,ds[i].name);
    	cin>>ds[i].lop>>ds[i].date>>ds[i].point;
    	while (ds[i].date.size() <10) {
	    	if (ds[i].date[2]!='/') ds[i].date.insert(0,"0");
	    	if(ds[i].date[5]!='/') ds[i].date.insert(3,"0");
	    }
    }
}
void in(SinhVien ds[],int N) {
	for (int i=1;i<=N;i++) {
        if (i<=9) ds[i].masv+="00"; else ds[i].masv+="0";
        cout<<ds[i].masv<<i<<" "<<ds[i].name<<" "<<ds[i].lop<<" "<<ds[i].date<<" ";
    	cout << fixed << setprecision(2)<<ds[i].point<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
