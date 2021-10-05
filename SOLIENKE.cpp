#include <bits/stdc++.h>
using namespace std;
int check(long long n) {
	while (n>9) {
			int x=n%10;
			n/=10;
			int y=n%10;
			if ( abs(x-y) != 1) return 0; 
			}
		return 1;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		long long n;
		cin>>n;
		if (check(n)) cout<<"YES"<<endl; else cout<<"NO"<<endl;
	}
}
