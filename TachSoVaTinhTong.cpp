#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		string s,s1="";
		int sum=0;
		cin>>s;
		for (int i=0;i<s.size();i++) if (s[i]>='0' && s[i]<='9') {
			sum+= s[i] -48;
			s.erase(i,1);
			i--;
		}
		while (sum>0) {
			s1+= (char) ((sum%10) + 48);
			sum/=10;
		}
		reverse(s1.begin(),s1.end());
		sort(s.begin(),s.end());
		s+=s1;
		cout<<s<<endl;
	}
}
