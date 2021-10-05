#include<bits/stdc++.h>
using namespace std;
int main () {
	int n, m;
	cin >> n >> m;
	int a[m];
	for (int i=1;i<=m;i++) a[i]=0;
	int x;
	while (n--) {
		cin >> x;
		a[x]++;
	}
	int max=-1,max2=-1;
	for (int i=1;i<=m;i++) if (a[i] > max) max=a[i];
	for (int i=1;i<=m;i++) if (a[i] < max && a[i] > max2) max2=a[i];
	if (max2==-1 || max2==0) cout<<"NONE"; else {
		for (int i=1;i<=m;i++) if (a[i]==max2) {
			cout<<i;
			break;
		}
	}
	
}
