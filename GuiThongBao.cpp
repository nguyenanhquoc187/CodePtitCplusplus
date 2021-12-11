#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s,s1;
        getline(cin,s);
        int n;
        if (s.size()<=100) n=s.size(); else n=100;
        for (int i=0;i<n;i++) s1+=s[i];
        while (s1[ s1.size() - 1] !=' ') s1.erase(s1.size()-1,1); 
        cout<<s1;
        cout<<endl;
    }
}