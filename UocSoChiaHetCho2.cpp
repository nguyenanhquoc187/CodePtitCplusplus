#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		long n;
		cin>>n;
		int dem=0;
		for (int i=1;i<=sqrt(n);i++) {
			if (n%i==0) {
				if (i%2==0) dem++;
				if (i!=n/i && (n/i)%2==0) dem++; 
			}
		}
		cout<<dem<<endl;
	}
}
