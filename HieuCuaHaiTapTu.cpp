#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    cin.ignore();
    while (t--) {
        string s1,s2,s[100];
        getline(cin,s1);
        getline(cin,s2);
        s1+=" "; int j=0;
        while (s1.find(" ") != string::npos ) {
            s[j++] = s1.substr(0, s1.find(" ")  );
            s1.erase(0,  s1.find(" ")  +1 );
        }
        for (int i=0;i<j ; i++) {
            for (int k=i+1;k< j ; k++ ) {
                if (s[i]== s[k] ) {                             // xoatrung
                    for (int l=k;l<j-1;l++) s[l]=s[l+1];
                    j--; k--;
                }
            }
        }
        for (int i=0;i<j;i++) for (int k=i+1;k<j;k++) if (s[i] > s[k] ) swap(s[i],s[k]);
        for (int i=0;i<j;i++) if ( s2.find(s[i]) == string::npos ) cout<<s[i]<<" ";
        cout<<endl;
    }
}