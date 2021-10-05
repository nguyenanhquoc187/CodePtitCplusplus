#include <bits/stdc++.h>
using namespace std;
long long giaithua (long long n) {
	if (n==1) return 1;
	return n*giaithua(n-1);
}
int main() {
	long long n,s=0;
	cin>>n;
	for (int i=1;i<=n;i++) s+=giaithua(i);
	cout<<s;
}