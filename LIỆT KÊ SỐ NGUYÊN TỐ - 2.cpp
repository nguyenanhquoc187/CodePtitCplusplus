#include <iostream>
using namespace std;
void sangnguyento(int m, int n) {
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
    for (int i=m;i<=n;i++) if (a[i] == 1) cout<<i<<" ";
    cout<<endl; 
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>m>>n;
        sangnguyento(m,n);
    }
}