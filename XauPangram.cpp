#include <bits/stdc++.h>
using namespace std;
void xoatrung(string &s) {
	for (int i=0;i<s.size();i++) {
		for (int j=i+1;j<s.size();j++) if (s[i]==s[j]) {
			s.erase(j,1);
			j--;
		}
	}
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		string s;
		int k;
		cin>>s>>k;
		int length=s.size();
		xoatrung(s);
		if (k >= 26-s.size() && length>=26) cout<<1; else cout<<0;
		cout<<endl;
	}
}
