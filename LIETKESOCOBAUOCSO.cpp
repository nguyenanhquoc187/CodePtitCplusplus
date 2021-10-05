#include <iostream>
#include <math.h>
using namespace std;
void sangnguyento(int n) {
    int a[10000];
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
    for (int i=2;i<=n;i++) if (a[i] == 1) cout<<i*i<<" ";
    cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        sangnguyento(sqrt(n));
    }
}

