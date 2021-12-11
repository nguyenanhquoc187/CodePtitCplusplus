#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        long long dem=0;
        cin >> n >> k;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        vector <int> v(a,a+n);
        sort(v.begin(),v.end());
        for (int i=0;i<n-1;i++) {
           int j=upper_bound(v.begin()+i+1,v.end(),v[i]+k-1)  - v.begin();
            dem= dem + (j-i -1);
        }
        cout<<dem<<endl;
    }
}