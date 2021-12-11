#include<bits/stdc++.h>
using namespace std;
struct data
{
    string name,sdt,date;
};
int check(string s) {
    for (int i=0;i<s.size();i++) {
        if (s[i] <'0' || s[i] >'9') return 0;
    }
    return 1;
}
string daonguoc(string &s1) {
	string s2=" ",s3,s[100];
	s1+=s2;
	int x=0;
	while (s1.find(s2) != string::npos ) {
		s[x]= s1.substr(0,  s1.find(s2) );
		x++;
		s1.erase(0, s1.find(s2) + 1);
		
	}
	for (int i=x-1;i>=0;i--) if (i!=0) s3+=s[i] + " "; else s3+=s[i];
	return s3;
}
bool cmp(data a, data b) {
    a.name= daonguoc(a.name);
    b.name= daonguoc(b.name);
    return a.name < b.name;
}
int main () {
    ifstream in;
    // in.open("D:\\Code\\C-CPP\\codeptitC++\\PTIT.in.txt");
    in.open("SOTAY.txt");
    ofstream out;
    // out.open("D:\\Code\\C-CPP\\codeptitC++\\PTIT.out.txt");
    out.open("DIENTHOAI.txt");
    data a[10000];
    int i=0;
    string date;
    while (!in.eof()) {
        string s;
        getline(in,s);
        if (s.substr(0,4) == "Ngay" ) {
            date= s.substr(5,10);
        } else {
            if ( check(s)  && !s.empty()) {
                a[i].sdt=s;
                a[i].date=date;
                i++;
            } else {
                if (!s.empty() ) a[i].name=s;
            }
        }
    }
    sort(a,a+i,cmp);
    for (int j=0;j<i;j++) out<<a[j].name<<": "<<a[j].sdt<<" "<<a[j].date<<endl;
    in.close();
    out.close();
}