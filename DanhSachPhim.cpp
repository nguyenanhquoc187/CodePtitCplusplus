#include<bits/stdc++.h>
using namespace std;
class TheLoai{
public:
    string matl="TL",tentl;
    static int j;
    friend istream &operator >> (istream &in, TheLoai &a) {
        getline(cin,a.tentl);
        if (j<=9) a.matl=a.matl + "00" + to_string(j); else a.matl= a.matl + "0" + to_string(j);
        j++;
        return in;
    }
};
class Phim{
public:
    string matl,maf="P",tenf,date,tentl;
    int sotap;
    static int j;
    friend istream &operator >> (istream &in, Phim &a) {
        cin >> a.matl >>a.date;
        cin.ignore();
        getline(cin,a.tenf);
        cin >> a.sotap;
        if (j<=9) a.maf=a.maf + "00" + to_string(j); else a.maf= a.maf + "0" + to_string(j);
        j++;
        return in;
    }
    friend ostream &operator << (ostream &out, Phim a) {
        cout<<a.maf<<" " << a.tentl <<" " << a.date << " " <<a.tenf<<" "<<a.sotap<<endl;
        return out;
    }
};
int Phim::j=1;
int TheLoai::j=1;
bool cmp(Phim a, Phim b) {
    a.date.erase(5,1);
    a.date.erase(2,1);
    b.date.erase(5,1);
    b.date.erase(2,1);
    return a.date  > b.date;
}
void process(TheLoai tl[], int n, Phim p[], int m) {
    for (int i=0;i<m;i++) {
        for (int k=0;k<n;k++) {
            if (p[i].matl==tl[k].matl) {
                p[i].tentl=tl[k].tentl;
            }
        }
    }
    sort(p,p+m,cmp);
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	TheLoai tl[100];
	Phim p[1000];
	for (int i = 0; i < n; i++) {
		cin >> tl[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	process(tl, n, p, m);
	for (int i = 0; i < m; i++) {
		cout << p[i];
	}
}
