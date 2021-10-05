#include <iostream>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		long long n,a[10000],dem=0;
		cin>>n;
		for (long long  i=0;i<n;i++) cin>>a[i];
		for (long long i=0;i<n;i++) if (a[i]!=0) {
			cout<<a[i]<<" ";
		} else dem++;
		for (long long i=0;i<dem;i++) cout<<0<<" ";
		cout<<endl;
	}
}
