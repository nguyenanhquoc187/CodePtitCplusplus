#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		long long Max=0,tich;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) {
			tich=1;
			for (int j=i;j<n;j++) {
				tich*=a[j];
				Max=max(Max,tich);
			}
		}
		cout<<Max<<endl;
	}
}
