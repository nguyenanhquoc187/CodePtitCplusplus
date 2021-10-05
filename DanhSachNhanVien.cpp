#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string manv,name,date,gender,address,mathue,datehd;
//	int manv=0;
};
void nhap(NhanVien &a) {
	cin.ignore();
	getline(cin,a.name);
	cin>>a.gender;
	cin>> a.date;
	cin.ignore();
	getline (cin, a.address);
	cin>>a.mathue;
	cin>> a.datehd;
}
void inds(NhanVien a[], int n) {
	for (int i=0;i<n;i++) 
	{
	if (i>=9) a[i].manv="000"; else a[i].manv="0000";
	cout<<a[i].manv<<i+1<<" "<<a[i].name<<" "<<a[i].gender<<" ";
	cout<<a[i].date<<" "<<a[i].address<<" "<<a[i].mathue<<" "<<a[i].datehd;
	cout<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
