#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;
	while (t--) {
		string s;
		cin>>s;
		s.erase(s.find("084") , 3);
		cout<<s<<endl;
	}
}
