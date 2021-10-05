#include<bits/stdc++.h>
using namespace std;
struct People
{
    string name,date;
    int year,month,day;
};

int check_age (People a, People b) {
    if (a.year < b.year ) return 1; 
    if (a.year == b.year && a.month < b.month) return 1;
    if (a.year == b.year && a.month== b.month && a.day < b.day) return 1;
    return 0;
}
void Input(People a[], int n) {
    for (int i=0;i<n;i++) cin>>a[i].name>>a[i].date;
}
void Process(People a[],int n) {
    for (int i=0;i<n;i++) {
        a[i].day= ( a[i].date[0]-'0' ) * 10 + ( a[i].date[1]-'0' ) ;
        a[i].month = ( a[i].date[3]-'0' ) * 10 + ( a[i].date[4]-'0' ) ;
        a[i].year = ( a[i].date[6]-'0' ) * 1000 + ( a[i].date[7]-'0' )*100  + ( a[i].date[8]-'0' ) * 10 + ( a[i].date[9]-'0' ) ;
    }
}
void Sapxep(People a[], int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) if ( check_age(a[i],a[j]) )  swap(a[i],a[j]);
    }
}
void Output(People a[], int n) {
    cout<<a[0].name<<endl<<a[n-1].name;
}
int main () {
    int n;
    People a[100];
    cin >> n;
    Input(a,n);
    Process(a,n);
    Sapxep(a,n);
    Output(a,n);
}