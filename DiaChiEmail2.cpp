#include <bits/stdc++.h>
using namespace std;
void chuanhoa(string &s) {
	while (s[0]== ' ') {
		s.erase(0,1);
	}
	while( s[ s.size() - 1 ] ==' ' ) s.erase(s.size() - 1,1);
}
int main () {
    int t,j=0;
    cin>>t;
    cin.ignore();
    string s1[1000];
    while (t--) {
        string s,email;
        int x,dem=1;
        getline(cin,s);
        chuanhoa(s);
        for (int i=s.size()-1;i>=0; i-- ) {
            if (s[i] == ' ') {
                email+= s.substr(i+1,s.size() - i - 1) ;
                x=i;
                break;
            }
        }
        email+=s[0];
        for (int i=1;i<x;i++) if (s[i] == ' ' && s[i+1] != ' ') email+=s[i+1];
        transform(email.begin(), email.end(), email.begin(), ::tolower );
        s1[j++] = email;
        for (int i=0;i<j-1;i++) {
            if (email==s1[i]) dem++;
        }
        if (dem!=1) {
            email+= (char) (dem+'0');
            email+="@ptit.edu.vn";
        }  else email+="@ptit.edu.vn";
        cout<<email<<endl;
    }
}