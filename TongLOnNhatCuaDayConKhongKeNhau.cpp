#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n],b[n+4]={0},c,d,sum=0;
        for (int i=0;i<n;i++) cin >> a[i];
        c=a[0];
        d=max(a[0],a[1]);
        for (int i=2;i<n;i++) {
            sum= max(c+a[i],d);
            c=d; d=sum;
        }
        cout<<sum<<endl;
    }
}