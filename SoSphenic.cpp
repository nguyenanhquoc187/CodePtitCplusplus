#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        long long n,dem=0,a[10],x=0;
        cin>>n;
        int y=n;
        for (long long i=2;i<=n;i++) {
        	if (n%i==0) {
        		a[x++]=i;
        		dem++;
			}
            while (n%i==0) {
                n/=i;
            }
            
        }
        if ( a[0]*a[1]*a[2] ==  y && dem==3) cout<<1<<endl; else cout<<0<<endl;
    }
}
