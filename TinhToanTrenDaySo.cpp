#include<bits/stdc++.h>
const long long r=1e9+7;
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long a[n];
		long long h=1,g;
		for (int i=0;i<n;i++) cin >> a[i];
		for(int i=0; i<n; i++) h = ((h%r)*(a[i]%r))%r;
		g=a[0];
		for (int i=1;i<n;i++) g=__gcd(g,a[i]);
		long long x=1;
		for (int i=0;i<g;i++) x=(x*h)%r;
		cout<<x<<endl;
	}
}
