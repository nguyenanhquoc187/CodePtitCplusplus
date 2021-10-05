#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		int dem=0;
		string s;
		cin>>s;
		string s1=s;
		reverse(s1.begin(),s1.end());
		for (int i=0;i<s.size();i++) if (s[i]=='2' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='0') dem++;
		if (dem==s.size() && s1==s ) cout<<"YES"; else cout<<"NO";
		cout<<endl;
	}
}
