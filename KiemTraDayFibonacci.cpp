#include<bits/stdc++.h> 
using namespace std; 
int check(int a[], int n) {
	for (int i=0;i<=100;i++) if (n==a[i]) return 1;
	return 0;
}
int main() {
	int t;
	cin>>t;
	int a[10000];
	a[0]=0;
	a[1]=1;
	for (int i=2;i<=100;i++) a[i]=a[i-1] + a[i-2];
	while (t--) {
		int n,b[1000];
		cin>>n;
		for (int i=0;i<n;i++) cin>>b[i];
		for (int i=0;i<n;i++) {
			if (check (a, b[i] ) ) cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
