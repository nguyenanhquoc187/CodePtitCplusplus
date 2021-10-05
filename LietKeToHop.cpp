#include <bits/stdc++.h>
using namespace std;
void incauhinh(int a[],int k) {
	for (int i=1;i<=k;i++) cout<<a[i];
	cout<<" ";
}
void process(int n, int k) {
	int a[100];
	for (int i=1;i<=k;i++) a[i]=i;
	incauhinh(a,k);
	int ok=1;
    while (ok ) {
    	for (int i=k;i>=1;i++) {
    		if (a[i] < n-k+i) {
    			ok=1;
//    			int tmp=a[i];
    			a[i]+=1;
    			for (int j=i+1;j<=k;j++) {
    				a[j]=a[i] + j - i;
				}
    			incauhinh(a,k);
    			break;
			} else ok=0;
		}
	} 
    	
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n >> k;
		process(n,k);
	}
	
}
