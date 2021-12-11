#include<bits/stdc++.h>
using namespace std;
int main () {
    ifstream in;
    in.open("d:\\Code\\C-CPP\\codeptitC++\\PTIT.in.txt");
    map <int,int> m;
    while (!in.eof()) {
        int n;
        in >> n;   
        m[n]++;
    }
    for (auto i:m) {
        cout << i.first << " " << i.second << endl;
    }
    in.close();
}