#include <iostream>
#include <math.h>
using namespace std;
void sangnguyento(long int n) {
    long int a[1000000];
    for (int i=2;i<=n;i++){
        a[i]=1;
    }
    for (int i=2;i<=n;i++) {
        if (a[i] == 1 ) {
            for (int j=2*i;j<=n;j+=i) {
                a[j]=0;
            }
        }
    }
    int dem=0;
    for (int i=2;i<=n;i++) if (a[i] == 1) dem++;
    cout<<dem<<endl;
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        long int n;
        cin>>n;
        sangnguyento(sqrt(n));
    }
}