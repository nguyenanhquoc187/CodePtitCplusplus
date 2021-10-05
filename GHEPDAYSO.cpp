#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		int k,n,x=0,a[10000];
		cin>>k>>n;
		for (int j=1;j<=k;j++) {
			for (int i=x;i<x+n;i++) cin>>a[i];
			x+=n;
		}
		sort(a,a+ k*n);
		for (int i=0;i< k*n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
