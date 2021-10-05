#include<bits/stdc++.h>
using namespace std;
int check1(string s) {
	for (int i=0;i<s.size()-1;i++) if (s[i] >=s[i+1] ) return 0;
	return 1;
}	
int check2(string s) {
	for (int i=0;i<s.size()-1;i++) if (s[i]!=s[i+1]) return 0;
	return 1;
}
int check3(string s) {
	if (s[0] == s[1] && s[1]==s[2] & s[3]==s[4]) return 1;
	return 0;
}
int check4(string s) {
	int dem=0;
	for (int i=0;i<s.size();i++) if (s[i]=='6' || s[i]=='8') dem++;
	if (dem==5) return 1; 
	return 0;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		s.erase(0,5); s.erase(3,1);
		if (check1(s) || check2(s) || check3(s) || check4(s) ) cout<<"YES"; else cout<<"NO";
		cout<<endl;
	}
}
