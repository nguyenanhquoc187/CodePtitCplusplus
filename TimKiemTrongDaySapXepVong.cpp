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
			cout<<i+1<<endl;
			check=1;
			break;
		}
		if (check==0 ) cout<<-1<<endl;
	}
}
