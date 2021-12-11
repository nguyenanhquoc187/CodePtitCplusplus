#include<bits/stdc++.h>
using namespace std;
int main () {
    ifstream in;
    in.open("VANBAN.in");
    set<string> set;
    while (!in.eof()) {
        string s;
        in >> s;   
        transform(s.begin(),s.end(), s.begin(),::tolower);
        set.insert(s);
    }
    for (auto i:set) cout<<i<<endl;
    in.close();
}