#include <bits/stdc++.h>
using namespace std;

int main () {
	int t; cin >> t; 
	while (t--) {
		int n,sum1=0,sum2=0,Max=0;
		cin >> n;
		int a[n],b[n];
		for (int i=0;i<n;i++) 	cin >> a[i];		
		for (int i=0;i<n;i++) 	cin >> b[i];
		for (int i=0;i<n;i++) {
			sum1=0;sum2=0;
			for (int j=i;j<n;j++) {
				sum1+=a[j];
				sum2+=b[j];
				if (sum1==sum2) Max=max(Max,j-i+1);
			}
			
		}
		cout<<Max<<endl;
	}
}
