#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		long long n,m,a[10000],b[10000];
		cin>>n>>m;
		for (int i=0;i<n;i++) cin>>a[i];
		for (int i=0;i<m;i++) cin>>b[i];
		sort (a,a+n,greater<int>()  );
		sort(b,b+m); 
		long long p= (long long ) a[0]*b[0];
		cout<<p<<endl;
	}
}
