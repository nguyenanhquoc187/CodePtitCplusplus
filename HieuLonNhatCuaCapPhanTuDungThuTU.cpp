#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,a[100000],max=-1;
        cin >>n ; 
        for (int i=0;i<n;i++ ) cin >> a[i];
        for (int i=0;i<n;i++) {
            for (int j=i+1;j<n;j++) {
                if (a[j]-a[i] > max) max = a[j]-a[i];
            }
        }
        if (max < 0) cout<<-1; else cout<<max;
        cout<<endl;
    }
}