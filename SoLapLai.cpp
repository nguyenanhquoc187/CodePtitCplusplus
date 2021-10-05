#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		long long a,x,y,p=0,q=0;
		cin>>a>>x>>y;
		long long z=__gcd(x,y);
		for (int i=1;i<=z;i++) {
			cout<<a;
		}
		cout<<endl;
	}

}
