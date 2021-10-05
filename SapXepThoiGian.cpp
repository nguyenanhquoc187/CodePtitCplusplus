#include<bits/stdc++.h>
using namespace std;
struct Time
{
    int hour,minute,second;
};
void input(Time a[], int n) {
    for (int i=0;i<n;i++) cin>>a[i].hour>>a[i].minute>>a[i].second;
}
int check(Time a, Time b) {
    if ( a. hour > b.hour ) return 1;
    if ( a.hour == b.hour && a.minute > b.minute ) return 1;
    if ( a.hour== b.hour && a.minute == b.minute && a.second > b.second ) return 1;
    return 0;
}
void sapxep (Time a[], int n) {
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if ( check(a[i],a[j]) ) swap(a[i],a[j]);
        }
    }
}
void output (Time a[], int n ) {
    for (int i=0;i<n;i++) {
        cout<<a[i].hour<<" "<<a[i].minute<<" "<<a[i].second<<endl;
    }
}
int main () {
    int n;
    struct Time a[5000];
    cin >> n; 
    input(a,n);
    sapxep(a,n);
    output(a,n);
}