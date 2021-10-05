#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		long long n,q,a[10000];
		cin>>n>>q;
		for (int i=1;i<=n;i++) cin>>a[i];
		while (q--) {
			long long l,r,sum=0;
			cin>>l>>r;
			for (int i=l;i<=r;i++) sum+=a[i];
			cout<<sum<<endl;
		}
	}
}
