#include<bits/stdc++.h> 
using namespace std; 
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,x,a[100000],check=0;
		cin>>n>>x;
		for (int i=0;i<n;i++) cin>>a[i];
		for (int i=0;i<n;i++) if (a[i]==x) {
			check=1;
			break;
		}
		if (check==1 ) cout<<1<<endl; else cout<<-1<<endl;
	}
}
