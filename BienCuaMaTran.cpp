#include<bits/stdc++.h> 
using namespace std; 
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,a[100][100];
		cin>>n;
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=n;j++) cin>>a[i][j];
		}
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=n;j++) {
				if (i==1 || i==n) cout<<a[i][j]<<" ";
				else if (j==1 || j==n) cout<<a[i][j]<<" "; else cout<<"  ";
			}
			cout<<endl;
		}
	}
}
