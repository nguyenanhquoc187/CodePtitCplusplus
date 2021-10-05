#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s) {
	while (s[0]== ' ') 	s.erase(0,1);
	while( s[ s.size() - 1 ] ==' ' ) s.erase(s.size() - 1,1);
}
int main () {
	string s,email;
	int x;
	getline(cin,s);
	chuanhoa(s);
	for (int i=s.size()-1;i>=0; i-- ) {
		if (s[i] == ' ') {
			email+= s.substr(i+1,s.size() - i - 1) ;
			x=i;
			break;
		}
	}
	email+=s[0];
	for (int i=1;i<x;i++) if (s[i] == ' ' && s[i+1] != ' ') email+=s[i+1];
	transform(email.begin(), email.end(), email.begin(), ::tolower );
	email+="@ptit.edu.vn";
	cout<<email;
}
