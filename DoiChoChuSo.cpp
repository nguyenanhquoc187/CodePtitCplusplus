#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        int j=n.size() -1 ;
        while ( n[j] >= n[j-1]   ) {
            j--;
            if (j==0) break;
        }
        if (j==0) cout<<-1; else {
            char s=n[j-1]-1;
            int x=j;
            int found =n.find(s , x );
            while ( found == string::npos && s!='0') {
                s--;
                found =n.find(s , x );
            } 
            swap(n[j-1],n[found] );
            cout<<n;
        }
        cout<<endl;
    }
}