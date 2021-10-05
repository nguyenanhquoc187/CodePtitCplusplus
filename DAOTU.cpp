#include <bits/stdc++.h>
using namespace std;
void daonguoc(string &s1) {
	string s2=" ",s3,s[100];
	s1+=s2;
	int x=0;
	while (s1.find(s2) != string::npos ) {
		s[x]= s1.substr(0,  s1.find(s2) );
		x++;
		s1.erase(0, s1.find(s2) + 1);
		
	}
	for (int i=x-1;i>=0;i--) if (i!=0) s3+=s[i] + " "; else s3+=s[i];
	cout<<s3;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while (t--) {
		string s ;
		getline(cin,s);
		daonguoc(s);
		cout<<endl;
	}
}
