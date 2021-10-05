#include <bits/stdc++.h>
using namespace std;
int check(int n) {
	int chan=0;
	while (n>0) {
		if ( (n%10) %2 ==0 ) chan++;
		n/=10;
	}
	return chan;
}
int main () {
	int n;
	cin>>n;
	int dem=0;
	for (int i=pow (10,n-1); i< pow(10,n);i++ ) {
		if ( check(i)*2 == n ) {
			cout<<i<<" ";
			dem++;
		}  
		if (dem==10) {
			cout<<endl;
			dem=0;
		}
	}
}
