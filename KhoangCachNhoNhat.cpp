#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,a[10000];
		cin>>n;
		for (int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int min=a[1] -a[0];
		for (int i=1;i<n-1;i++) if (a[i+1] - a[i] < min) min=a[i+1] - a[i];
		cout<<min<<endl;
	}
}
