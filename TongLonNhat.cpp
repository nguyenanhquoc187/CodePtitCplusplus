#include <bits/stdc++.h>
using namespace std;
int check(int a[], int n, int b[], int m) {
    int tong =0, sum=0,t;
    for (int i=0;i<n;i++) {
         tong+=a[i];
         t=0;
         for (int j=i+1;j<m;j++) {
            t+= b[j];
         }
         if (tong + t > sum ) sum = tong + t;
    }
    return sum;
}
int main () {
    int t;
    cin >> t; 
    while (t--) {
        int n,m,a[1000],b[1000];
        cin >> n >> m ;
        for (int i=0;i<n;i++) cin >> a[i];
        for (int i=0;i<m;i++) cin >> b[i];
        int max1= max( check(a,n,b,m),check(b,m,a,n) ) ;
        cout<<max1<<endl;
    }
}