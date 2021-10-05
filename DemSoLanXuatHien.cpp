#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,a[10000],x,dem=0;
		cin>>n>>x;
		for (int i=0;i<n;i++) cin>>a[i];
		for (int i=0;i<n;i++) if (a[i] == x) dem++;
		if (dem==0) cout<<-1<<endl; else cout<<dem<<endl;
	}
}
