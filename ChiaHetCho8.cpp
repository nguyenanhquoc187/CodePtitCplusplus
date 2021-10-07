#include<bits/stdc++.h>
using namespace std;
int chiahet(string s,int k) {
	int dem=0;
	for (int i=0;i<s.size();i++) {
		int du=0;
		for (int j=i;j<s.size();j++) {
			du= (du*10 + s[j]-'0')%k;	
			if (du==0) dem++;
		}
	}
	return dem;
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout<<chiahet(s,8) - chiahet(s,24)<<endl;
	}
}
