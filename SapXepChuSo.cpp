#include<bits/stdc++.h> 
using namespace std; 
void xoatrung(string &s) {
	for (int i=0;i<s.size();i++) {
		for (int j=i+1;j<s.size();j++) if (s[i]==s[j]) {
			s.erase(j,1);
			j--;
		}
	}
}
void sapxepxau(string &s) {
	for (int i=0;i<s.size();i++) {
			for (int j=i+1;j<s.size();j++) {
				if (s[i] > s[j] ) {
					swap(s[i],s[j]);
				}
			}
		}
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		string s[10000],s1;
		for (int i=0;i<n;i++) {
			cin>>s[i];
			s1+=s[i];
		}
		xoatrung(s1);
		sapxepxau(s1);
		for (int i=0;i<s1.size();i++) cout<<s1[i]<<" ";
		cout<<endl;
	}
}
