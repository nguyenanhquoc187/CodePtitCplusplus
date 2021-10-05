#include <bits/stdc++.h>
using namespace std;
void xoatrung(string &s) {
	for (int i=0;i<s.size();i++) {
		for (int j=i+1;j<s.size();j++) if (s[i]==s[j]) {
			s.erase(j,1);
			j--;
		}
	}
}
int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        int k,dem=0;
        cin>>s>>k;
        for (int i=0;i<s.size();i++) {
            int a[26];
            memset(a, 0, sizeof(a));
            int count=0;
            for (int j=i;j<s.size();j++) {
                if ( a[ s[j] - 'a' ] == 0 ) count++;
                a[ s[j] - 'a' ] ++;
                if (count==k) dem++; 
                if (count>k) break;
            }
        }
        cout<<dem<<endl;
    }
}
