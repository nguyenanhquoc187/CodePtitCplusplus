#include<bits/stdc++.h>
using namespace std;
int main () {
    ifstream in;
    in.open("VANBAN.txt");
    ofstream out;
    out.open("MUCLUC.txt");
    int page=0;
    while (!in.eof()) {
        string s;
        getline(in,s);
        if (s=="Page " + to_string(page+1) ) page++;
        int found = s.find("Level");
        if (found!=string::npos) {
            if (s[found+5] == '1' ) out<<">";
            if (s[found+5] == '2' ) out<<">>";
            if (s[found+5] == '3' ) out<<">>>";
            for (int i=found+8;i<s.size();i++) out<<s[i];
            out<<"--- "<<page<<endl;
        }
    }
    in.close();
    out.close();
}