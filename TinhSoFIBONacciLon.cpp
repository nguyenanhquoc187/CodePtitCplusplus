#include<bits/stdc++.h> 
using namespace std; 
const long long r = 1e9 + 7;
int main() {
	unsigned long long t,a[100000];
	cin>>t; a[0]=0;
	a[1]=1;
	a[2]=1;
	for (int i=3;i<=1000;i++) a[i]=a[i-1]%r + a[i-2]%r;
	while (t--) {
		int n;
		cin>>n;
		cout<<a[n]%r<<endl;
	}
}
