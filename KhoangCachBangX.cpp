#include<bits/stdc++.h> 
using namespace std; \
int search(int a[],int n, int x,int k) {
	for (int i=0;i<n;i++) if (a[i]==k) return 1;
	return 0;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,a[100000],k,dem=0;
		cin>>n>>k;
		for (int i=0;i<n;i++) cin>>a[i];
//		sort(a,a+n);
//		for (int i=0;i<n;i++) {
//			int *x=find(a,a+n,a[i] + k);
//			if (  *x==a[i] +k  ) {
//				dem=1;
//				break;
//			}
//		}
//		if (dem!=0) cout<<1; else cout<<-1;
		int *x=&a[0];
		x++;
		cout<<*x;
		cout<<endl;
	}
}

