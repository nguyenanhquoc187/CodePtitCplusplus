#include <iostream>
#include <math.h>
using namespace std;
int  songuyento ( int n) {
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++) {
		if (n%i==0) return 0;
	}
	return 1;
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,dem=0;
        cin>>n;
        if (n%2 == 1) {
        	if ( songuyento(n-2) ) cout<<2<<" "<<n-2<<endl; else cout<<-1<<endl;
		} else {
			for (int i=2;i<=n;i++) {
				if (songuyento(i) && songuyento(n-i)) {
					cout<<i<<" "<<n-i<<endl;
					dem=1;
					break;
				}
			}
			if (dem==0) cout<<-1<<endl;
		}
    }
}
