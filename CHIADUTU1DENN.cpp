#include<iostream> 
using namespace std ; 
int main() { 
	int t; 
	cin>>t; 
	while(t--) {
		long long n,k,s=0;
		cin>>n>>k;
		for (long long i=1;i<=n;i++) {
			s+= i%k;
		}
		cout<<s<<endl;
 	} 
 }
