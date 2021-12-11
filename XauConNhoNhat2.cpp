#include<bits/stdc++.h>
using namespace std;
string xoatrung(string s) {
	set<char> set(s.begin(),s.end());
	string s1; for (auto i:set) s1+=i;
	return s1;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1,s2;
        cin >> s1;
        s2=xoatrung(s1);
        int Min=1e5,n=s2.size();
        for (int i=0;i<s1.size();i++) {
            string s="";
            set<char> set;
            for (int j=i;j<s1.size();j++) {
                set.insert(s1[j]);
                if (set.size()==n) {
                    Min=min(Min,j-i+1);
                    break;
                }
            }
        }
        cout<<Min<<endl;
    }
}