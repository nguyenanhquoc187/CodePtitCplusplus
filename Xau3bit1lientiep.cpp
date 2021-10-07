#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n, int k) {
    int dem,count=0,i=0;
    while (i<n) {
        dem=0;
        if (a[i]==1) {
            for (int j=i;j<n;j++) if (a[j]!=1) break; else dem++;
            if (dem==k) count++;
        }
        if (dem==0) i++; else i+=dem;
    }
    if (count==1) return 1; return 0;
}
void process(int x,int n) {
    int a[100];
    for (int i=0;i<n;i++) a[i]=0;
    int k=n-1;
    while (k!=n) {
        for (int i=n-1;i>=0;i--) {
            if (a[i]==0) {
                k=i;
                break;
            } else k=n;
        }
        if (k!=n) {
            for (int i=k;i<n;i++) a[i]=1-a[i];
            if (check(a,n,x) ) {
                for (int i=0;i<n;i++) if (a[i]==1) cout<<"A "; else cout<<"B ";
                cout<<endl;
            }
        }
    }
}
int main () {
    int n,k;
    cin >> k >> n;
    process(k,n);
}
