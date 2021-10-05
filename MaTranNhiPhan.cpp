#include<bits/stdc++.h>
using namespace std;
int main () {
		int n,a[100][100],dem=0,count=0;
		cin>>n;
		for (int i=1;i<=n;i++) for (int j=1;j<=3;j++) cin>>a[i][j];
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=3;j++) {
				if (a[i][j] == 1) {
					dem++;
				}
			}
			if (dem>=2 ) count++;
			dem=0;
		}
		cout<<count;
		
	
}
