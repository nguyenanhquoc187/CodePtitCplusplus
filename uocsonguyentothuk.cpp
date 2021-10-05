#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int a[10000],j=1,dem=0;
        for (long long i=2;i<=n;i++) {
            while (n%i==0) {
                dem++;
                a[j++]=i;
                n/=i;
            }
        }
        if (k>dem) cout<<-1; else cout<<a[k];
        // if (n!=1 && k==1) cout<<n; else if (n!=1 && k!=1) cout<<-1;
        cout<<endl;
    }
}