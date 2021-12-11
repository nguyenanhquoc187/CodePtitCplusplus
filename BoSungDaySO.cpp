#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,Max=0,check=1;
    cin >> n;
    int a[n+1];
    for (int i=0;i<n;i++) {
        cin >> a[i];
        if (a[i] > Max) Max=a[i];
    }
    for (int i=1;i<=Max;i++) {
        int *p;
        p=find(a,a+n,i);
        if (p==a+n)  {
            cout<<i<<endl;
            check=0;
        }
    }
    if (check) cout<<"Excellent!"; 
}