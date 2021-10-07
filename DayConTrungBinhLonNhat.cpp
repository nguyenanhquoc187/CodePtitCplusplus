#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n >> k;
		int a[10000];
		long long Max=-1e9,sum;
		for (int i=0;i<n;i++) cin >> a[i];
		int index,x=0;
		while (x+k<=n) {
			sum=0;
			for (int i=x;i<x+k;i++)	sum+=a[i];
			if (sum >= Max) {
				Max=sum;
				index=x;
			}
			x++;
		}
		for (int i=index;i<index+k;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
