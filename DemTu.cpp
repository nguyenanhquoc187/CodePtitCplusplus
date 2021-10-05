#include<bits/stdc++.h>
using namespace std;
int check(char s) {
	if (s==' ' || s=='\t' || s=='\n') return 1; 
	return 0;
}
int main () {
	int t;
	cin>>t;
	cin.ignore();
	while (t--) {
		string s;
		int count;
		getline(cin,s);
		if (check(s[0])  )  count=0; else count=1;
		int x=s.size() -1;
		for (int i=0;i<x;i++) if (check(s[i]) && check(s[i+1]) == 0 ) count++;
		cout<<count<<endl;
	}
}