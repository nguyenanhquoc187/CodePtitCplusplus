#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t-- ) {
        int n,a[10000],b[1000];
        cin >> n;
        for (int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        // copy(a,a+n,b);
        bool check[10000];
        for (int i=0;i<n;i++) check[i]=true;
        for (int i=0;i<n;i++) {
            int j=i+1;
            while (a[i]==a[j] ) {
                check[j]=false;
                j++;
            }
        }
        for (int i=0;i<n;i++) {
            if (check[i]==true) {
                int dem=count(a,a+n,a[i]);
                //  for (int j=i;j<=dem;j++) cout<<a[i]<<" ";
                cout<<dem<<" ";
            }
        }
        
        // for (int i=0;i<n;i++) cout<<b[i]<<" ";
    }
}