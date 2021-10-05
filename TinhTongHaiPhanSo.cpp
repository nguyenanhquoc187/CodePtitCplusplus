#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &p) {
	cin>>p.tu>>p.mau;
}
void rutgon(PhanSo &p) {
	long long gcd=__gcd(p.tu,p.mau);
	p.tu/=gcd;
	p.mau/=gcd;
}
PhanSo tong(PhanSo &p, PhanSo &q) {
	PhanSo t;
	long long bcnn= (p.mau * q.mau) / __gcd(p.mau,q.mau);
	t.tu = p.tu * (bcnn/p.mau) + q.tu * (bcnn/q.mau);
	t.mau=bcnn;
	rutgon(t);
	return t;
}
void in(PhanSo &p) {
	cout<<p.tu<<"/"<<p.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
