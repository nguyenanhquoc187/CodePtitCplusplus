#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,a[1000],c[1000];
		cin>>n;
		for (int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int x=n-1,j=0;
		for (int i=0;i<n;i++) {
			if (i % 2 == 0) {
				c[i]= a[x];
				x--;
			} else {
				c[i]= a[j];
				j++;
			}
		}
		for (int i=0;i<n;i++) cout<<c[i]<<" ";
		cout<<endl;
	}
}

