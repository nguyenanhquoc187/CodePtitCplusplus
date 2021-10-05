#include<bits/stdc++.h> 
using namespace std; 
int main() {
	unsigned long long t,a[100000];
	cin>>t;
	a[1]=1;
	a[2]=1;
	for (int i=3;i<=93;i++) a[i]=a[i-1] + a[i-2];
	while (t--) {
		bool check=false;
		unsigned long long n;
		cin>>n;
		for (int i=1;i<=93;i++) if (a[i]==n) {
			cout<<"YES"<<endl;
			check=true;
			break;
		}
		if (check==false) cout<<"NO"<<endl;
	}
}
