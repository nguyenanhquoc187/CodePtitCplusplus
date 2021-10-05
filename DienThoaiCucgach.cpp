#include<bits/stdc++.h>
using namespace std;	
int main () {
	int t;
	cin>>t;
	while (t--) {
		string s,s1;
		cin>>s;
		transform(s.begin(),s.end(),s.begin(),::tolower);
		for (int i=0;i<s.size();i++) {
			if (s[i]>='a' && s[i]<='c'  ) s1+='2';
			if (s[i]>='d' && s[i]<='f'  ) s1+='3';
			if (s[i]>='g' && s[i]<='i'  ) s1+='4';
			if (s[i]>='j' && s[i]<='l'  ) s1+='5';
			if (s[i]>='m' && s[i]<='o'  ) s1+='6';
			if (s[i]>='p' && s[i]<='s'  ) s1+='7';
			if (s[i]>='t' && s[i]<='v'  ) s1+='8';
			if (s[i]>='w' && s[i]<='z'  ) s1+='9';
		}
		string s2=s1;
		reverse(s1.begin(), s1.end() ) ;
		if (s1==s2) cout<<"YES"; else cout<<"NO";
		cout<<endl;
	}
}
