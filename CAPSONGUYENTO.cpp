#include <iostream>
using namespace std;
void sangnguyento(int n) {
    long int a[100000];
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
    int b[10000],x=0,dem=0;
    for (int i=2;i<=n;i++) {
        if (a[i] == 1) {
            b[x]=i;
            x++;
        }
    }
    for (int i=0;i<x;i++) {
        for (int j=x-1;j>=i;j--) {
            if ( b[i] + b[j] == n) {
                cout<<b[i] <<" "<<b[j] ;
                dem++;
            }
            if (dem==1) break;
        }
        if (dem==1) break;
    }
    if (dem==0) cout<<-1;
    cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        sangnguyento(n);
    }
}
