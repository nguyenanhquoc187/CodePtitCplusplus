#include<bits/stdc++.h>
using namespace std;
class PhanSo {
private:
    long long tu,mau;
public:
    PhanSo() {};
    PhanSo(int tu,int mau) { }
    void rutgon() {
        long long x=__gcd(tu,mau);
        tu/=x;
        mau/=x;
    }
    friend istream &operator >> (istream &in,PhanSo &p) {
        cin >> p.tu >> p.mau;
        return in;
    }
    friend ostream &operator << (ostream &out,PhanSo p) {
        cout << p.tu <<"/"<<p.mau;
        return out;
    }
    PhanSo operator + (PhanSo &p) {
        PhanSo a;
        a.tu= tu*p.mau + p.tu*mau;
        a.mau= mau*p.mau;
        a.rutgon();
        return a;
    }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}