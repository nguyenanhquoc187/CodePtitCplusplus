#include <iostream>
#include <math.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        int mu=1;
        for (long long i=2;i<=sqrt(n);i++) {
            mu=1;
            while (n%i==0) {
                mu++;
                n/=i;
            }
            cout<<i<<" "<<mu;
        }
        if (n!=1) cout<<n<<" "<<1;; 
        cout<<endl;
    }
}