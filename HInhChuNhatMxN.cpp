#include <bits/stdc++.h>
using namespace std;
void incauhinh(string s) {
	for (int i=0;i<s.size();i++) cout<<s[i]<<" ";
	cout<<endl;
}
void process(int m, int n) {
	string s;
    s.insert(0,m,'D'); s.insert(0,n,'N');
    incauhinh(s);
    int ok=1;
    while (ok ) {
    	int check= n+ m-1;
    	for (int i=s.size() - 1 ; i >= 0 ; i--) {
    		if (s[i] == 'N' && i!= check) {
    			swap(s[i],s[i+1]);
    			incauhinh(s);
    			break;
			} else {
				int j=i; 
				while (s[j]=='N' && j==check) {
					j--; check--; 
				}
				for (int k=j;k>=0;k--) {
					if (s[k]=='N') {
						ok=1; 
						swap(s[k],s[k+1]);
						for (int l=1;l<n+m-check;l++) 	swap(s[k+l+1],s[check+l] );
						incauhinh(s);
						break;
					} else ok=0;
				} 
				break;
			}
		}
	}
}
int main () {
    int m,n;
    cin >> m >> n;
    process(m,n);
}
