#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n,a[21];
		cin >> n ;
		for (int i=0;i<n;i++) a[i]=i+1;
		for (int i=0;i<n;i++) cout<<a[i];
		while (next_permutation(a,a+n) ) {
			cout<<" ";
			for (int i=0;i<n;i++) cout<<a[i];
		}
		cout<<endl;
	}
}