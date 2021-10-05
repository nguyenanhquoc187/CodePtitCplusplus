#include<bits/stdc++.h> 
using namespace std; 
int main () {
	int t;
	cin>>t;
	while (t--) { 
		long long n,a[100000],sum,min;
		cin>>n;
		for (int i=0;i<n;i++) cin>>a[i];
		sum=100000000;
		for (int i=0;i<n-1;i++) {
			for (int j=i+1;j<n;j++) {
				if ( abs(a[i] + a[j] ) < sum) {
					min= a[i] + a[j] ;
					sum= abs(a[i] + a[j] );
				}
			}
		}
		cout<<min<<endl;
		
	}
}
