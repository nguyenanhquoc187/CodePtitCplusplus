#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,s=0;
		cin>>n;
		for (int i=1;i<=2;i++) {
			s= s*10 +n%10;
			n/=10;
		}
		if (s== 68) cout<<1<<endl; else cout<<0<<endl;
	}
}
