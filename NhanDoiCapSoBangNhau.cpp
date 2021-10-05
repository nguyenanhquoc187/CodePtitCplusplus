#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,a[100000];
        cin >> n;
        for (int i=0;i<n;i++) cin>>a[i];
        for (int i=1;i<n;i++) {
            if (a[i] != 0 &&  a[i] == a[i-1] ) {
                a[i]=0;
                a[i-1]*=2;
            }
        }
        int dem=0;
        for (int i=0;i<n;i++) if (a[i] != 0 ) {
            cout<<a[i]<<" ";
            dem++;
        }
        for (int i=1;i<=n-dem;i++) cout<<0<<" ";
        cout<<endl;
    }
}