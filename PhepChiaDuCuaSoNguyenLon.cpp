#include<bits/stdc++.h> 
using namespace std; 
int main () {
	int t;
	cin>>t;
	while (t--) {
		string n;
		long long m,k=0,a[1000];
		cin>>n>>m;
		for (int i=0;i<n.size();i++) a[i]= n[i] - 48;
		for (int i=0;i<n.size();i++) {
			k=(k*10 + a[i] ) %m;
		}
		cout<<k<<endl;
	}
}
