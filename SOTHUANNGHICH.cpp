#include <bits/stdc++.h>
using namespace std;
int sothuannghich(long long n) {
	long long s=0,x=n;
	while (n>0) {
		s= s*10 + n%10;
		n/=10;
	}
	if (s==x) return 1; else return 0;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		long long n;
		cin>>n;
		if (sothuannghich(n)) cout<<"YES"<<endl; else cout<<"NO"<<endl;
	}
}
