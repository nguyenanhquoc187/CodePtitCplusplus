#include <bits/stdc++.h>
using namespace std;
int search(long long a[],long n, long long vt) {
	for (long i=0;i<n;i++) if (vt == a[i]) return 1;
	return 0;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		long long n,a[1000],b[1000];
		cin>>n;
		for (long i=0;i<n;i++) cin>>a[i];
		for (long long i=0;i<n;i++) if ( search (a,n,i) ) b[i]=i; else b[i]=-1;
		
		for (int i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
}

