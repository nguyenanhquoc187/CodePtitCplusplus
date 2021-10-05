#include<bits/stdc++.h>
using namespace std;
struct ThiSinh {
	string name,date;
	double a,b,c,sum;
};
void nhap(ThiSinh &A) {
	getline(cin,A.name);
	cin>>A.date;
	cin>>A.a>>A.b>>A.c;
	A.sum=A.a+A.b+A.c;
}
void in(ThiSinh &A) {
	cout<<A.name<<" "<<A.date<<" ";
	cout << fixed << setprecision(1)<<A.sum;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
