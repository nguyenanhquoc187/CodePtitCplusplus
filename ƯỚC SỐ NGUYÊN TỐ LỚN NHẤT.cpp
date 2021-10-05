	#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        int max=1;
        for (long long i=2;i<=sqrt(n);i++) {
            while (n%i==0) {
                if (i>max) max=i;
                n/=i;
            }
        }
        if (n!=1) cout<<n; else cout<<max;
        cout<<endl;
    }
}