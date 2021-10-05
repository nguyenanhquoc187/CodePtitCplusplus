#include<bits/stdc++.h> 
using namespace std; 
int main () {
	int t;
	cin>>t;
	while (t--) {	
		string a;
		long long b,m,k=0,s[10030],j=1;
		cin>>a>>b>>m;
		for (int i=0;i<a.size();i++) s[i]= a[i] - 48;
		for (int i=0;i<a.size();i++) {
				k=(k*10 + s[i] ) %m;
			}
		for (int i=1;i<=b;i++) j= (j*k)%m;
		cout<<j<<endl;
	}
}
