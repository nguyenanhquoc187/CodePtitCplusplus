#include<bits/stdc++.h>
using namespace std;
int check1 (string s) {
    if (s.size()==3 )  {
        if ( s[0] =='2' && (s[1]<='5' && s[1] >='0') && (s[2] <='5'  && s[2] >='0') ) return 1;
        if (s[0]=='1') return 1;
    }
    if (s.size()==2 || s.size()==1) return 1;
    return 0;
}
int check2 (string s) {
    for (int i=0;i<s.size();i++) {
        if (s[i] <'0' || s[i] >'9' ) return 0;
    }
    return 1;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s,s1;
        cin >> s;
        int check=1,dem=0;
        for (int i=0;i<s.size();i++) if (s[i]=='.') dem++;
        if (dem!=3) check=0;
        for (int i=0;i<s.size();i++) {
            s1+=s[i];
            if (s[i]=='.') {
                s1.erase(s1.size()-1,1);
                if ( check1(s1) ==0 || check2(s1)==0) check=0;
                s1="";
            }
        }
        if (check1(s1)==0 || check2(s1)==0) check=0;
        if (check==1) cout<<"YES"; else cout<<"NO";
        cout<<endl;
    }
}