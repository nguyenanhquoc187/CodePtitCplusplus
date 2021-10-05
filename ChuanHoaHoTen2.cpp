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
	transform(s.begin(), s.end(),s.begin(), ::tolower );
	if (s[0] >='a' && s[0] <='z') s[0]-=32;
	for (int i=1;i<s.size();i++) if (s[i]==' ' && s[i+1] >='a' && s[i+1] <='z' ) s[i+1]-=32;
}
void way1(string &s) {
	string s1="";
	for (int i=s.size()-1;i>=0;i--) if (s[i]==' ') {
		for (int j=i+1;j<s.size();j++) s1+=s[j];
		s.erase(s.begin() + i, s.begin() +s.size() );
		break;
	}
	s1= s1 + " " + s;
	cout<<s1<<endl;
}
void way2(string &s) {
	int i=0;
	string s1=" ";
	while (s[i]!=' ') {
		s1+=s[i];
		i++;
	}
	s.erase(0,i+1); 
	s+=s1;
	cout<<s<<endl;
}
int main () {
	int t;
	cin>>t;
	cin.ignore();
	while (t--) {
		int n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin,s);
		chuanhoa(s);
		if (n==1) way1(s); else way2(s);
	}
}

