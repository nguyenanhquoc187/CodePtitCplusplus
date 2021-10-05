#include<bits/stdc++.h>
using namespace std;
struct MatHang {
    int maMh;
    string TenMh,Nhom;
    double price,Purchuase_price,profit;
};
void input(MatHang a[], int n) {
    for (int i=1;i<=n;i++) {
        a[i].maMh=i;
        cin.ignore();
        getline(cin,a[i].TenMh);
        getline(cin,a[i].Nhom);
        cin>>a[i].Purchuase_price>>a[i].price;
        a[i].profit= a[i].price - a[i].Purchuase_price;
    }
}
void sapxep(MatHang a[], int n) {
    for (int i=1;i<n;i++) {
        for (int j=i+1;j<=n;j++) if (a[i].profit < a[j].profit ) swap(a[i],a[j]);
    }
}
void output(MatHang a[], int n) {
    for (int i=1;i<=n;i++) {
        cout<<a[i].maMh<<" "<<a[i].TenMh<<" "<<a[i].Nhom<<" "<<fixed<<setprecision(2)<<a[i].profit<<endl;
    }
}
int main () {
    int n;
    cin >> n;
    struct MatHang a[100];
    input(a,n);
    sapxep(a,n);
    output(a,n);
}