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
}
int main() {
        int n,m;
        cin>>m>>n;
        if (m>n) {
        	int x=m;
        	m=n;
        	n=x;
		}
        sangnguyento(m,n);
}
