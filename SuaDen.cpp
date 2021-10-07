#include<bits/stdc++.h>
using namespace std;
int main () {
	int n,b,k;
	cin >> n >> k >> b;
	int a[n+1],x,Min=1e9,dem=0;
	for (int i=1;i<=n;i++) a[i]=1;
	for (int i=1;i<=b;i++) {
		cin >> x;
		a[x]=0;
	}
	for (int i=1;i<=k;i++) if (a[i]==0) dem++;
	Min=min(Min,dem);
	for (int i=k+1;i<=n;i++) {
		if (a[i]==0) dem++;
		if (a[i-k]==0) dem--;
		Min=min(Min,dem);
	}
	cout<<Min<<endl;
}
