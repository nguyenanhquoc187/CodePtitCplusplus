#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,b[10000];
    cin>>n;
    for (int i=1;i<=n*n;i++) cin>>b[i];
    sort(b,b+n*n+1);
    int m=n,p=n*n;
    int x=1,k=0,i,j;
    int a[n][n];
    while (x<=p) {
        for(j=k;j<m;j++){
        a[k][j]=x++;
        }
        for(i=k+1;i<m;i++){
            a[i][m-1]=x++;
        }
        for(j=m-2;j>=k;j--){
            a[m-1][j]=x++;
        }
        for(i=m-2;i>k;i--){
            a[i][k]=x++;
        }
        m--;
        k++;
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            // cout<<a[i][j]<<" ";
          cout<<b[  a[i][j]  ]<<" ";
    }
    cout<<endl;
    }
}
