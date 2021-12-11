#include <bits/stdc++.h>
using namespace std;
int countword (string s) {
    int dem=0;
    for (int i=0;i<s.size();i++) if (s[i]==' ') dem++;
    return dem+1;
}
int main () {
    int n,dem=0;
    cin >> n;
    string s[n+1];
    cin.ignore();
    for (int i=0;i<n;i++) getline(cin,s[i]);
    if (countword(s[n-1])==7) s[n]="1 2 3 4 5 6"; else {
        s[n]="1 2 3 4 5 6 7";
    }
    int count=0;
    for (int i=0;i<n;i++) {
        if (countword(s[i]) == 7) count++;
        if (countword(s[i])==7 && countword(s[i+1])==6) {
            dem= dem + count/4;
            count=0;
        }
        if (countword(s[i])==8 && countword(s[i+1])==7) dem++;
    }
    cout<<dem<<endl;
    count =0;
    for (int i=0;i<n;i++) {
        if (countword(s[i])==8 && countword(s[i+1])==7) cout<<1<<endl;
        if (countword(s[i]) == 7) count++;
        if (countword(s[i])==7 && countword(s[i+1])==6) {
            for (int j=1;j<=count/4;j++) cout<<2<<endl;
            count=0;
        }
    }
}
