#include<bits/stdc++.h>
using namespace std;
class PhanSo {
private:
    long long tu,mau;
public:
    PhanSo(int tu,int mau) {
    }
    void rutgon() {
        long long x=__gcd(tu,mau);
        tu/=x;
        mau/=x;
    }
    friend istream &operator >> (istream &cin, PhanSo &p) {
        cin >> p.tu >> p.mau;
        return cin;
    }
    friend ostream &operator << (ostream &cout, PhanSo &p) {
        cout << p.tu <<"/"<<p.mau;
        return cout;
    }
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}