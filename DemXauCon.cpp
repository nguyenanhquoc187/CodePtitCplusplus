#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        int k,dem=0;
        cin>>s>>k;
        for (int i=0;i<s.size();i++) {
            set<char> set;
            for (int j=i;j<s.size();j++) {
                set.insert(s[j]);
                if (set.size() == k) dem++;
                if (set.size() > k) break;
            } 
        }
        cout<<dem<<endl;
    }
}
