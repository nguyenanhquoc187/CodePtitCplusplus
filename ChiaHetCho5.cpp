#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		long long sum=0;
		reverse(s.begin(),s.end());
		for (int i=0;i<s.size();i++) {
			if (s[i]=='1') {
				if (i%4==0) sum+=1;
				if (i%4==1) sum+=2;
				if (i%4==2) sum+=4;
				if (i%4==3) sum+=3;
			}
		}
		if (sum%5==0) cout<<"Yes"; else cout<<"No";
		cout<<endl;
	}
}
