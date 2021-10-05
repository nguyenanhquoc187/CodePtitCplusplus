#include <bits/stdc++.h>
using namespace std;
int  songuyento (long int n) {
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++) {
		if (n%i==0) return 0;
	}
	return 1;
}
int tongchuso(int n) {
	int s=0;
	while (n>0) {
		s+= n%10;
		n/=10;
		}
	return s;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		int sum=0,x=n;
		for (long long i=2;i<=sqrt(n);i++) {
            while (n%i==0) {
            	sum+= tongchuso(i);
                n/=i;
            }
        }
        if (n!=1) sum+=tongchuso(n);
        if (songuyento(x) == 0 && sum==tongchuso(x) ) cout<<"YES"; else cout<<"NO";
        cout<<endl;
	}
}
