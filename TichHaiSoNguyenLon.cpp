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
	if (a[0] + b[0] - 48 + nho> '9' ) sum+="1";
	reverse(sum.begin(),sum.end());
	return sum;
}
string tich_so_nguyen_lon(string a, string b) {
	int dem=0,nho;
	string tich;
	if (a.size()==0 || b.size()==0 || a=="0" || b=="0") return "0";
	for (int i=b.size()-1;i>=0;i--) {
		string s; nho=0;
		for (int j=a.size()-1;j>=0;j--) {
			int tmp=(b[i] -48) * (a[j] - 48) + nho;
			s+=tmp%10 + 48;
			nho=tmp/10;
		}
		if (nho!=0) s+=nho+48;
		reverse(s.begin(),s.end());
		s.insert(s.size(),dem,'0');
		tich= sum_int_big(tich,s);
		dem++;
	}
	return tich;
}
int main () {
	int t;
	cin >> t;
	while (t--) {
		string a,b;
		cin >> a >> b;
		cout<<tich_so_nguyen_lon(a,b)<<endl;
	}
}
