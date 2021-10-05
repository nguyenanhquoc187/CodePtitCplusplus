#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,a[100000],x;
        cin >>n ; 
        for (int i=0;i<n;i++ ) cin >> a[i];
        for (int i=0;i<n;i++) {
            if (i==0) {
                x=a[i];
                a[i]*=a[i+1];
            } else {
                if (i!= n-1) {
                    int y=x;
                    x=a[i];
                    a[i]= a[i+1]*y;
                } else a[i]*=x;
            }

        }
        for (int i=0;i<n;i++ ) cout<<a[i]<<" ";
        cout<<endl;
    }
}