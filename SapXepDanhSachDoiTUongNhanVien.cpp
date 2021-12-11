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
    friend void sapxep(NhanVien a[], int n) ;
    friend int check_age (NhanVien a, NhanVien b);

};
int NhanVien::j=1;
int check_age (NhanVien a, NhanVien b) {
    if (a.year > b.year ) return 1; 
    if (a.year == b.year && a.month > b.month) return 1;
    if (a.year == b.year && a.month== b.month && a.day > b.day) return 1;
    return 0;
}
void sapxep(NhanVien a[], int n) {
    for (int i=0;i<n;i++) {
        a[i].month= (  a[i].date[0]-'0' ) * 10 + (  a[i].date[1]-'0' ) ;
        a[i].day = (  a[i].date[3]-'0' ) * 10 + (  a[i].date[4]-'0' ) ;
        a[i].year = (  a[i].date[6]-'0' ) * 1000 + (  a[i].date[7]-'0' )*100  + (  a[i].date[8]-'0' ) * 10 + (  a[i].date[9]-'0' ) ;
    }
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) if ( check_age(a[i],a[j])  ) swap(a[i],a[j]);
    }
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
