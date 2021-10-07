#include<bits/stdc++.h>
using namespace std;
int check(string s) {
	for (int i=0;i<s.size();i++) if (s[i] == s[i+1]) return 0;
	return 1;
}
int main () {
	int t;cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int ok=0;
		s.insert(0,"1");
		for (int i=0;i<s.size();i++) {
			if (s[i]==s[i+1]) {
				for (int j=0;j<s.size()-1;j++) {
					if (s[i] != s[j] && s[i]!=s[j+1] ) {
						s.insert(j+1,1,s[i]); 
						ok=1;
						break;
					} 
					ok=0;
				}
				if (ok) {
					s.erase(s.begin()+i+1);
					i--;
				}
			}
		}
		if (check(s)) cout<<1; else cout<<0; 
		cout<<endl;
	}
}
