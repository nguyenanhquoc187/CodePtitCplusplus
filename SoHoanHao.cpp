#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	long long a[10]={6,28,496,8128,33550336,8589869056,137438691328,};
	while (t--) {
		long long n,check=0;
		cin>>n;
		for (int i=0;i<=6;i++) if (n==a[i]) check=1;
		if (check) cout<<1; else cout<<0;
		cout<<endl;
	}
}
