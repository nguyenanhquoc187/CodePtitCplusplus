#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        int sum=0;
        cin>>s;
        for (int i=0; i<s.size();i++) {
            sum+=s[i] - '0';
        }
        long long n=sum;
        while (sum>9) {
		    sum=0;
		    while (n>0) {
		    sum+= n%10;
		    n/=10;
		    }
		    n=sum;
	    }
        if (sum==9) cout<<1; else cout<<0;
        cout<<endl;
    }
}