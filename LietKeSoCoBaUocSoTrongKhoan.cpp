#include <iostream>
#include <math.h>
using namespace std;
void sangnguyento(int n, int m) {
    int a[100000],dem=0;
    for (int i=2;i<=m;i++){
        a[i]=1;
    }
    for (int i=2;i<=m;i++) {
        if (a[i] == 1 ) {
            for (int j=2*i;j<=m;j+=i) {
                a[j]=0;
            }
        }
    }
    for (int i=n;i<=m;i++) if (a[i] == 1) dem++;
    cout<<dem<<endl;
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n,m;
        cin>>n>>m;
        sangnguyento(n,sqrt(m));
    }
}

