#include<bits/stdc++.h>
using namespace std;
int check(int a[],int b[]) {
    for (int i='a';i<='z';i++) if (b[i] < a[i] ) return 0;
    return 1;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
        string s1,s2,result="-1";
        cin >> s1 >> s2;
        int a[200]={};
        for (int i=0;i<s2.size();i++) a[s2[i]]++;
        int min=100,l,r;
        for (int i=0;i<s1.size();i++) {
            string s="";
            int b[200]={};
            for (int j=i;j<s1.size();j++) {
                s+=s1[j];
                b[s1[j]]++;
                if (check(a,b)==1 && j-i +1 < min) {
                    min=j-i+1;
                   result=s;
                }
            }
        }
        cout<<result<<endl;
    }
}