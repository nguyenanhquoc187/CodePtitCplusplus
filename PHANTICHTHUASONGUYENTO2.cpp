#include <iostream>
#include <math.h>
using namespace std;
int main () {
        long long n;
        cin>>n;
        int mu=1;
        for (long long i=2;i<=sqrt(n);i++) {
            mu=0;
            while (n%i==0) {
                mu++;
                n/=i;
            }
            if (mu!=0) cout<<i<<" "<<mu<<" "<<endl;
        }
        if (n!=1) cout<<n<<" "<<1<<endl; 
        cout<<endl;
}
