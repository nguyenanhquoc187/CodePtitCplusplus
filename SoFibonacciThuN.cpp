#include<bits/stdc++.h> 
using namespace std; 
int main() {
	unsigned long long t,a[100000];
	cin>>t;
	a[1]=1;
	a[2]=1;
	for (int i=3;i<=93;i++) a[i]=a[i-1] + a[i-2];
	while (t--) {
		int n;
		cin>>n;
		cout<<a[n]<<endl;
	}
}
