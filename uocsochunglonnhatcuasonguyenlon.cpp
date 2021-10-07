#include<bits/stdc++.h>
using namespace std;
long long chiadu(string s,long long k) {
	long long du=0;
	for (int i=0;i<s.size();i++) {
		du= (du*10 + s[i]-'0')%k;	
	}
	return du;
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		long long a,c;
		string b;
		cin >> a >> b;
		c= chiadu(b,a);
		cout<<__gcd(a,c)<<endl;
		
	}
}
