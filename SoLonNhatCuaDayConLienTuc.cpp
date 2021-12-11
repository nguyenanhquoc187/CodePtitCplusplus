#include<bits/stdc++.h>
using namespace std;
struct cmp{
	bool operator() (int a, int b) {
		return a>b;
	}
};
int main () {
	int t;
	cin >> t;
	while (t--) {
		int n,k,Max=-1e9,Max2;
		cin >> n >>k;
		int a[n];
		multiset<int,cmp> s;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<k;i++) s.insert(a[i]);
		cout<<*s.begin()<<" ";
		for (int i=k;i<n;i++) {
			s.insert(a[i]);
			s.erase(s.find(a[i-k]));
			cout<<*s.begin()<<" "; 
		}
		cout<<endl;
	}
}
