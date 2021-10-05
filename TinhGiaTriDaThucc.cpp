#include <bits/stdc++.h>
using namespace std;
const long long r= 1e9 + 7;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int a[2010];
        long long n,x,sum=0,s;
        cin>>n>>x;
        for (int i=0;i<n;i++) cin>>a[i];
        int k=n-1;
        for (int i=0;i<n;i++) {
            s=1;
            for (int j=1;j<=k;j++) {
                s= (s*x)%r  ;
            }
            sum+=(s*a[i]) %r;
            k--;
        }
        cout<<sum%r<<endl;
    }
}