#include<bits/stdc++.h>
using namespace std;
struct cmp {
	bool operator() (string a,string b) {
		if (a.size() < b.size()) return 0;
		if ( a.size() > b.size() ) return 1;
		if (a.size()==b.size() ) return a>b;
	}
};
int main () {
	string a;
	vector<string> b;
	while (cin>>a) {
		string s=a;
		reverse(s.begin(), s.end());
		if (a==s && s.size()>1) {
			b.push_back(s);
		}
	}
	set<string,cmp> c(b.begin(),b.end());
	for (set<string>:: iterator it=c.begin();it!=c.end(); it++) {
		cout<<*it<<" "<<count(b.begin(), b.end(), *it)<<endl;
	}
}
