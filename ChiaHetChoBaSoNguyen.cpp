#include <bits/stdc++.h>
using namespace std;
int phantich(int a[], int n, int j) {
    int mu=1;
    for (long long i=2;i<=sqrt(n);i++) {
        mu=0;
        while (n%i==0) {
            mu++;
            n/=i;
        }
        if (mu!=0) {
            a[j++]=i;a[j++]=mu;
        }
    }
    if (n!=1) {
        a[j++]=n;
        a[j++]=1;
    }
    return j;
}
int main () {
        int t;
        cin >> t;
        while ( t--) {
            long long x,y,z,n,j=1,bcnn=1;
            cin>>x>>y>>z>>n;
            int a[1000];
            j=phantich(a,x,j);
            j=phantich(a,y,j);
            j=phantich(a,z,j);
            for (int i=1;i<j;i+=2) {
                for (int k=i+2;k<j;k+=2) if (a[i]==a[k]) {
                    a[i+1] = max(a[i+1] , a[k+1] );
                    a[k+1] = 0;
                }
            }
            for (int i=1;i<j;i+=2) bcnn*= pow(a[i],a[i+1] );
            long long m= pow(10,n-1);
            int k=2; long long check=bcnn;
            check= bcnn*  (m/bcnn );
            if (check<m) check=bcnn*  (m/bcnn +1);
            if (check > pow(10,n) - 1 ) cout<<-1<<endl; else cout<<check<<endl;
        } 
}