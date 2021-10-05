#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,m,a[100][100],b[10000],k=1;
        cin>>n>>m;
        for (int i=1;i<=n;i++) for (int j=1;j<=m;j++) cin>>a[i][j];
        int j=1,x=1,z=n*m;
        while (k<z) {
             for (int i=x;i<=m;i++) b[k++]=a[x][i];
             for (int i=x+1;i<=n;i++) b[k++]=a[i][m];
             for (int i=m-1;i>=x;i--) b[k++]=a[n][i];
             for (int i=n-1;i>=x+1;i--) b[k++]=a[i][x];
             x++; m--;  n--;
        }
        for (int i=z;i>=1;i--) cout<<b[i]<<" ";
        cout<<endl;
        
    }
}