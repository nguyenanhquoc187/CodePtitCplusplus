#include<bits/stdc++.h> 
using namespace std; 
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,a[100000];
		cin>>n;
		for (int i=1;i<n;i++) cin>>a[i];
		for (int i=1;i<n;i++) if (a[i]!=i) {
			cout<<i<<endl;
			break;
		}
	}
}
