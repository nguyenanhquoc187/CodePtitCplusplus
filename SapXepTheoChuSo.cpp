#include<bits/stdc++.h>
using namespace std;
int ghepso(int a,int b) {
	int n=b,dem=0;
	while (b>0) {
		dem++; b/=10;
	}
	return a* pow (10,dem) + n;
}
bool cmp(int a,int b) {
	return ghepso(a,b) > ghepso(b,a);
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n,cmp);
		for (int i=0;i<n;i++) cout<<a[i];
		cout<<endl;
	}
}
