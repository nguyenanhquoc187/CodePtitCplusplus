#include<bits/stdc++.h>
using namespace std;
int main () {
    ifstream in;
    in.open("PTIT.in");
    ofstream out;
    out.open("PTIT.out");
    string s;
    while (!in.eof()) {
        getline(in,s);
        out << s <<endl;
    }
    in.close();
    out.close();
}