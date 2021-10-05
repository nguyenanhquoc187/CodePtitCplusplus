#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long p=__gcd(x,y);
		p= (x*y) / p;
		long long t=__gcd(p,z);
		long long bcnn=(p*z) / t;
		long long m= pow(10,n-1);
        int k=2; long long check=bcnn;
        check= bcnn*  (m/bcnn );
        if (check<m) check=bcnn*  (m/bcnn +1);
        if (check > pow(10,n) - 1 ) cout<<-1<<endl; else cout<<check<<endl;
	}
}
