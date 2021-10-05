#include<bits/stdc++.h>
using namespace std;
string sum_int_big(string a, string b) {
	string sum;
	if (a.size() > b.size() ) b.insert(0,a.size() - b.size(),'0'); else  a.insert(0,b.size() - a.size(),'0');
	int j=b.size()-1,nho=0;
	for (int i=a.size()-1;i>=0;i--) {
		if (a[i] + b[j] - 48 + nho> '9'  ) {
			sum+= a[i] + b[j] - 48 -10 + nho;
			nho=1;
		} else {
			sum+= a[i] + b[j] - 48 + nho;
			nho=0;
		}
		j--;
	}
	if (a[0] + b[0] - 48 + nho> '9' ) sum+='1';
	reverse(sum.begin(),sum.end());
	return sum;
}
int main () {
	int t;
	cin>>t;
	while (t--) {
		string a,b;
		cin>>a>>b;
		cout<<sum_int_big(a,b)<<endl;
	}
}
