#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n,x,a[1000];
		cin >> n >> x;
		for (int i=0;i<n;i++) cin >> a[i];
		cout << count(a,a+n,x)<<endl;
	}
}
