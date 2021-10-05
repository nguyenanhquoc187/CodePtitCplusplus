#include<bits/stdc++.h>
using namespace std;
int check1(int a[], int l, int r) {
    int dem =0,ok=0;
    for (int i=l;i<r;i++) if (a[i+1] >= a[i]) dem++;
    int j=l;
    while (a[j+1] >= a[j] && j<r) {
        j++;
        ok=1;
    }
    while (a[j+1] <= a[j] && j<r && ok==1) {
        j++;
    }
    if (dem == (r - l) || dem==0  || j==r)    return 1; 
    return 0;
}
int main () {
    int t; 
    cin >> t;
    while (t--) {
        int n,l,r,a[10000];
        cin >> n ;
        for (int i=0;i<n;i++) cin>>a[i];
        cin >> l >> r;
        if ( check1(a,l,r)  ) cout<<"Yes"; else cout<<"No";
        cout<<endl;
    }
}