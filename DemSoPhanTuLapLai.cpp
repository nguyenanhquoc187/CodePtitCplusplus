#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n, int x) {
	for (int i=0;i<x;i++) if (a[i] == a[x] ) return 0;
	return 1;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,a[10000],count=0;
		cin>>n;
		for (int i=0;i<n;i++) cin>>a[i];
		for (int i=0;i<n-1;i++) {
			int dem=1;
			if (check(a,n,i)) for (int j=i+1;j<n;j++) if (a[i] == a[j]) dem++;
			if (dem>1) count+=dem;
		}
		cout<<count<<endl;
	}
}
