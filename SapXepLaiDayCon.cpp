#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n,x,l,r;
		cin >> n;
		vector<int> a;
		for (int i=0;i<n;i++) {
			cin >> x;
			a.push_back(x);
		}
		vector<int> b(a.begin(),a.end());
		sort(a.begin(),a.end());
		for (int i=0;i<n;i++) if (a[i]!=b[i]) {
			r=i+1; break;
		}
		for (int i=n-1;i>=0;i--) if (a[i]!=b[i]) {
			l=i+1;break;
		}
		cout<<r<<" "<<l<<endl;
	}
}
