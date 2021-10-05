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
int check(string s) {
	for (int i=0;i<s.size();i++) if (s[i] <'0' || s[i] >'9') return 1;
	return 0;
}
int main () {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		cin>>s;
		if (s[0] <='0' || s[0] >'9'  || check(s) ) cout<<"INVALID"; else {
			xoatrung(s);
			if (s.size()==10) cout<<"YES"; else cout<<"NO";
		}
		cout<<endl;
	}
}

