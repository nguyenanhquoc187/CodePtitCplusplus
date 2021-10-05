#include <bits/stdc++.h>
using namespace std;
int main () {
	int t; 
	cin >> t; 
	while (t--) {
		unsigned long long a,b,c;
		cin >> a >> b >> c;
		unsigned long long x=a%c, y=b%c;
		unsigned long long z= (x*y) % c;
		cout<<z<<endl;
	}
}
