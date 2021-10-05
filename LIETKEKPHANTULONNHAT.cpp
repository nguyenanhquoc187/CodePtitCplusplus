#include <iostream>

using namespace std;
void sapxepgiam(int a[], int n) {
	for (int i=0;i<n;i++) {
		for (int j=i;j<n;j++) {
			if (a[i]<a[j]) swap(a[i],a[j]);
		}
	}
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,k;
		int a[100000];
		cin>>n>>k;
		for (int i=0;i<n;i++) cin>>a[i];
		sapxepgiam(a,n);
		for (int i=0;i<k;i++) {
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
