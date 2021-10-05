#include <bits/stdc++.h>
using namespace std;
int check (char s) {
	if (s=='u' || s=='e' || s=='o' || s=='a' || s=='i' || s=='y') return 1;
	return 0;
}
int main () {
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	for (int i=0;i<s.size();i++) if (check(s[i]) ) {
		s.erase(i,1);
		i--;
	}
	for (int i=0;i<s.size();i++) cout<<"."<<s[i];
}
