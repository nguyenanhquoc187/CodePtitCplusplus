#include <bits/stdc++.h>
using namespace std;
void tong(int n) {
	int s=0;
	while (n>0) {
		s+= n%10;
		n/=10;
		}
	n=s;
	while (s>9) {
		s=0;
		while (n>0) {
		s+= n%10;
		n/=10;
		}
		n=s;
	}
	cout<<s<<endl;
}

int main () {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		tong(n);
	}
}
