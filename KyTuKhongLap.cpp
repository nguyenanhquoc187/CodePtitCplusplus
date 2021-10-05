#include <bits/stdc++.h>
using namespace std;
string xoatrung(string &s) {
	string s1="";
	for (int i=0;i<s.size();i++) {
		int dem=0;
		for (int j=i+1;j<s.size();j++) if (s[i] == s[j] ) {
			dem++;
		}
		for (int j=0;j<i;j++) if (s[i] == s[j] ) dem++;
		if (dem==0) s1+=s[i]; 
		
	}
	return s1;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		string s1=xoatrung(s);
		cout<<s1<<endl;
	}
}
