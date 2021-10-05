#include<iostream> 
using namespace std ; 
int main() { 
	int t; 
	cin>>t; 
	while(t--) {
		int a,m,dem=0;
		cin>>a>>m;
		for (int i=0;i<m;i++) {
			if ( (a*i) % m == 1) {
				cout<<i<<endl;
				dem=1;
				break;
			}
		}
		if (dem==0) cout<<-1<<endl;
 	} 
 }
