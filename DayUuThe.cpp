#include <bits/stdc++.h>
using namespace std;
int check(string s) {
	s+=" ";
	int dem=0,chan=0;
	for (int i=0;i<s.size();i++) {
		if (s[i]==' ') {
			dem++;
			if (s[i-1] % 2 == 0) chan++;
		}
	}
	if (dem%2==0  && chan > dem - chan) return 1;
	if (dem%2==1  && chan < dem - chan) return 1;
	return 0;
}
int main () {
	int t;
	cin>>t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin,s);
		if ( check(s) ) cout<<"YES"; else cout<<"NO";
		cout<<endl;
	}
}
