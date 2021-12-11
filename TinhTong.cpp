#include<bits/stdc++.h>
using namespace std;
int check(string s) {
    for (int i=0;i<s.size();i++) {
        if (s[i] <'0' || s[i] > '9') return 0;
    }
    if (s.size() > 9) return 0;
    return 1;
}
long long chuyendoi(string s) {
    long long  n=0;
    while (!s.empty()) {
        n= n*10 + s[0] - '0';
        s.erase(0,1);
    }
    return n;
}
int main () {
    ifstream in;
    in.open("DATA.in");
    long long sum=0;
    while (!in.eof()) {
        string s;
        in >> s;   
        if (check(s) == 1) {
            sum = sum + chuyendoi(s);
        }
    }
    cout << sum ;
    in.close();
}