#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,p,x,dem=0;
        cin >> n >> p;
        for (int i=1;i<=n;i++) {
            int j=i;
            while ( j%p==0) {
                dem++;
                j/=p;
            }
        }
        cout<<dem<<endl;
    }
}