#include <iostream>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n,a[10000],b[10000],d,x=0;
		cin>>n>>d;
		for (int i=0;i<n;i++) cin>>a[i];
		for (int i=0;i<d;i++) {
			b[x++] = a[i];
		}
		for (int i=0;i<n-d;i++) {
			a[i]=a[i+d];
		}
		x=0;
		for (int i=n-d;i<n;i++) a[i]=b[x++];
		for (int i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
