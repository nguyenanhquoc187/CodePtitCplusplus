#include<bits/stdc++.h>
using namespace std;
string sub_int_big(string a, string b) {
	string sub;
	if (a.size() > b.size() ) b.insert(0,a.size() - b.size(),'0'); else  a.insert(0,b.size() - a.size(),'0');
	if (b>a) swap(a,b);
	int j=b.size()-1,nho=0;
	for (int i=a.size()-1;i>=0;i--) {
		if (a[i] - nho - b[j]  < 0  ) {
			sub+= a[i] + 10 - b[j]  - nho +48;
			nho=1;
		} else {
			sub+= a[i] - b[j]  - nho +48 ;
			nho=0;
		}
		j--;
	}
	reverse(sub.begin(),sub.end());
//	while (sub[0]=='0' && sub.size()!=1 ) sub.erase(0,1);
	return sub;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		string a,b;
		cin>>a>>b;
		cout<<sub_int_big(a,b)<<endl;
	}
}
