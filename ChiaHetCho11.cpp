#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		int sum=0;
		for (int i=0;i<s.size();i++) {
			if (i%2==0) sum=sum+s[i]-48; else sum=sum-s[i]+48;
		}
		if (sum%11==0) cout<<1; else cout<<0;
		cout<<endl;
	}
}
