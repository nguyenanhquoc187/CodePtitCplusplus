#include<bits/stdc++.h>
using namespace std;
int main () {
    ifstream in1,in2;
    // in1.open("d:\\Code\\C-CPP\\codeptitC++\\PTIT.in.txt");
    // in2.open("D:\\Code\\C-CPP\\codeptitC++\\DATA2.in.txt");
    in1.open("DATA1.in");
    in2.open("DATA2.in");
    set<string> hop,giao1,giao2;
    while (!in1.eof()) {
        string s;
        in1 >> s;  
        hop.insert(s);
        giao1.insert(s);
    }
    while (!in2.eof()) {
        string s;   
        in2 >> s;
        hop.insert(s);
    }
    set<string> hop2;
    for (auto i:hop) {
    	transform(i.begin(), i.end(),i.begin(), ::tolower );
        hop2.insert(i);
    }
    for (auto i:hop2) cout<<i<<" ";
    cout<<endl;
    in2.close();
    // in2.open("D:\\Code\\C-CPP\\codeptitC++\\DATA2.in.txt");
    in2.open("DATA2.in");
    while (!in2.eof()) {
        string s;   
        in2 >> s;
        int n=giao1.size();
        giao1.insert(s);
        if (n==giao1.size()) giao2.insert(s);
    }
    set<string> giao3;
    for (auto i:giao2) {
    	transform(i.begin(), i.end(),i.begin(), ::tolower );
        giao3.insert(i);
    }
    for (auto i:giao3) cout<<i<<" ";
    cout<<endl;
    in1.close();
    in2.close();
}