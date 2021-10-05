#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string manv,name,date,gender,address,mathue,datehd;
    int day,month,year;
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
int check_age (NhanVien a, NhanVien b) {
    if (a.year > b.year ) return 1; 
    if (a.year == b.year && a.month > b.month) return 1;
    if (a.year == b.year && a.month== b.month && a.day > b.day) return 1;
    return 0;
}
void sapxep(NhanVien a[], int n) {
    for (int i=0;i<n;i++) {
        if (i<9) a[i].manv=a[i].manv+  "0000" + (char) (i + 1+'0'); 
        else a[i].manv= a[i].manv + "000" + chuyendoi(i+1);
        a[i].month= ( a[i].date[0]-'0' ) * 10 + ( a[i].date[1]-'0' ) ;
        a[i].day = ( a[i].date[3]-'0' ) * 10 + ( a[i].date[4]-'0' ) ;
        a[i].year = ( a[i].date[6]-'0' ) * 1000 + ( a[i].date[7]-'0' )*100  + ( a[i].date[8]-'0' ) * 10 + ( a[i].date[9]-'0' ) ;
    }
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) if ( check_age(a[i],a[j])  ) swap(a[i],a[j]);
    }
}
void inds(NhanVien a[], int n) {
	for (int i=0;i<n;i++) 
	cout<<a[i].manv<<" "<<a[i].name<<" "<<a[i].gender<<" "<<a[i].date<<" "<<a[i].address<<" "<<a[i].mathue<<" "<<a[i].datehd<<endl;;
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}