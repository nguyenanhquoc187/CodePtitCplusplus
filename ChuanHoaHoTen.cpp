#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s) {
	while (s[0]== ' ') {
		s.erase(0,1);
	}
	while( s[ s.size() - 1 ] ==' ' ) s.erase(s.size() - 1,1);
	for (int i=0;i<s.size();i++) {
		if (s[i]== ' ' && s[i+1]==' ') {
			s.erase(i,1);
			i--;
		}
	}
}
int main () {
	string s;
	int x;
	getline(cin,s);
	chuanhoa(s);
	transform(s.begin(), s.end(),s.begin(), ::tolower );
	s[0]-=32;
	for (int i=s.size()-1; i>=0;i--) {
		if (s[i]==' ' ) {
			for (int j=i+1;j<s.size();j++) s[j]=toupper(s[j]);
			s.insert(i,",");
			x=i;
			break;
		}
	}
	for (int i=1;i<x ;i++) if (s[i]==' ') s[i+1]= toupper (s[i+1]);
	cout<<s;
	system("pause");
}
