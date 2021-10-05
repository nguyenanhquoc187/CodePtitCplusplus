#include<bits/stdc++.h>
using namespace std;
void nhapmang(int a[],int n) {
    for (int i=0;i<n;i++) cin>>a[i];
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n,m,a[100000],b[100000],c[100000];
        cin >> n >> m;
        nhapmang(a,n); nhapmang(b,m);
        bool check[100000];
        for (int i=0;i<m;i++) {
            int *p; 
            p=find(a,a+n,b[i]);
            if (p!=a+n) check[i]=true; else check[i]=false;
        }
        int j=n,x=0;
        for (int i=0;i<m;i++) {
            if (check[i]==false) a[j++]=b[i]; else c[x++]=b[i];
        }
        sort(a,a+j);
        sort(c,c+x);
        for (int i=0;i<j;i++) cout<<a[i]<<" ";
        cout<<endl;
        for (int i=0;i<x;i++) cout<<c[i]<<" ";
        cout<<endl;
    }
}