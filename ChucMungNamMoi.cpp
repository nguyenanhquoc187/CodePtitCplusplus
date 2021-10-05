#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,dem=0;
	cin>>n;
	string s[10005];
	int check;
	cin.ignore();
	for (int i=0;i<n;i++) getline(cin,s[i]);
	for (int i=0;i<n;i++) {	
		check=1;
		for (int j=i+1;j<n;j++) if (s[i] == s[j] ) check=0;
		if (check) dem++;
	}
	cout<<dem;
		
}
