#include<bits/stdc++.h> 
using namespace std; 
int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,a[100000],x,y=0;
        cin>>n;
        for (int i=0;i<n;i++) cin>>a[i];
        for (int i=2;i<n;i++) y= y + a[i];
        x=a[0];
        int k=1;
        while (k<n) {
            if (x==y) break;
            x=x + a[k];
            y=y -a[k+1];
            k++;
        }
        if (k==n) cout<<-1<<endl; else cout<<k+1<<endl;
    }
}