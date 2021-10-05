#include <bits/stdc++.h>
using namespace std;
void xoatrung(string &s) {
	for (int i=0;i<s.size();i++) {
		while (s[i]== s[i+1]) {
			s.erase(i+1,1);
		}
	}
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		string s1=s;
		int dem,z=1;
		xoatrung(s1);
		for (int i=0;i<s.size();i+=dem) {
			dem=1;
			int j=i+1;
			while (s[j] == s[i] ) {
				j++;
				dem++;
			}
			char x=dem+48;
			string y=""; y+=x;
			s1.insert(z,y);
			z+=2;
		}
		cout<<s1<<endl;
	}
}
