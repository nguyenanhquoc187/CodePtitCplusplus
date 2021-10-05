#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin>>s;
		int sum=0,dem=0,so;
		for (int i=0;i<s.size();i+=dem) {
			so=0;int j=i;dem=0;
			while (s[j] >='0' && s[j] <='9' ) {
				dem++;
				so= so*10 + s[j]-48;
				j++;
			}
			if (dem==0) dem=1;
			sum= sum + so;
		}
		cout<<sum<<endl;
	}
}

