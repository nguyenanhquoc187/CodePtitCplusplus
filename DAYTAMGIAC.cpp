#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n;
		long long a[100000];
		cin>>n;
		for (int i=0;i<n;i++) cin>>a[i];
		sort(a, a + n ,greater<int> ());
		cout<<a[0]<<endl;
	}
}

