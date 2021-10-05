#include <bits/stdc++.h>
using namespace std;
int main () {
    int t ; 
    cin >> t;
    while ( t-- ) {
        string s ;
        cin >> s;
        int i=0,ok;
        while (i<s.size()) {
            ok=0;
            if (s[i]=='1' && s[i+1] == '0' && s[i+2]=='0') {
                s[i]='2';
                s[i+1] ='2' ; 
                s[i+2]='2'; 
                ok=1; 
            }
            if (s[i] == '1' && s[i+1]=='0' && s[i+2] == '2') {
                int j=i+2;
                while (s[j]=='2' ) j++;
                if (s[j]=='0') {
                    s[i]='2';
                    s[i+1] ='2' ; 
                    s[j]='2';
                    ok=1;
                }
                
            }
            if (s[i]=='1' && s[i+1]=='2') {
                int j=i+1;
                while (s[j]=='2' ) j++;
                if (s[j]=='0' && s[j+1]=='0')  {
                    s[i]='2';
                    s[j] ='2' ;  
                    s[j+1]='2';
                    ok=1;
                }
            }
            if (ok==1) i=0; else i++;
        }
        int size=0; i=0;
        while (i<s.size()) {
            int k=0;    
            if (s[i] =='2') {
                int j=i;
                while (s[j]=='2' ) {
                    k++; j++;
                }
            }
            if (k > size) size = k;
            if (k==0) i++; else i= i+ k; 
        }
        if (size != 0) cout<<size<<endl;
    }
}
