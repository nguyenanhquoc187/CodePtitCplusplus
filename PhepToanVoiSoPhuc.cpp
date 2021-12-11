#include <bits/stdc++.h>
using namespace std;
struct SoPhuc
{
	long long thuc, ao;
};

SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B) {
	SoPhuc C, D;
	D.thuc = A.thuc + B.thuc;
	D.ao = A.ao + B.ao;
	C.thuc = (D.thuc) * (D.thuc) - (D.ao) * (D.ao);
	C.ao = (D.thuc) * (D.ao) + (D.ao) * (D.thuc);

	return C;
}
void hien_thi(SoPhuc C) {
	cout << C.thuc << " + " << C.ao << "i";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
