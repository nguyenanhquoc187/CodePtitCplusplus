#include <bits/stdc++.h>
using namespace std;
int demtrung(string s) {
	int sum=0,dem;
	for (int i=0;i<s.size();i++) {
		dem=0;
		bool check=true;
//		for (int j=0;j<i;j++) if ( s[i] == s[j] ) check=false;
//		if (check ) 
		for (int j=i+1;j<s.size();j++)  {
			if (s[i]==s[j]) dem++;
		}
		sum+=dem;
	}
	return sum;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		cout<<s.size()+demtrung(s)<<endl;
	}
}
