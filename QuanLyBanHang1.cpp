#include<bits/stdc++.h>
using namespace std;
class KhachHang {
protected:
    string MaKh="KH0",TenKh,Gt,birth,address;
public:
    static int j;
    void display(string MaKh) {

    }
    friend istream &operator >> (istream &in, KhachHang &a) {
        cin.ignore();
        getline(cin,a.TenKh);
        cin>>a.Gt>>a.birth;
        cin.ignore();
        getline(cin,a.address);
        if (j <=9) a.MaKh= a.MaKh + "0" + to_string(j); else a.MaKh+= to_string(j);
        j++;
        return in;
    }
};
class MatHang {
protected:
    string MaMh="MH0",TenMh,DonVi;
    int Mua, Ban;
public:
    static int k;
    friend istream &operator >> (istream &in, MatHang &a) {
        cin.ignore();
        getline(cin,a.TenMh);
        cin >> a.DonVi >> a.Mua >> a.Ban;
        if (k <=9) a.MaMh= a.MaMh + "0" + to_string(k); else a.MaMh+= to_string(k);
        k++;
        return in;
    }
};
class HoaDon : KhachHang,MatHang {  
private:
    string MaHd="HD0",SoLuong;
    int thanhtien;
public:
    static int l;
    friend istream &operator >> (istream &in, HoaDon &a) {
        cin >> a.MaKh >> a.MaMh >> a.SoLuong;
        a.thanhtien= a.Ban - a.Mua;
        if (l <=9) a.MaHd= a.MaHd + "0" + to_string(l); else a.MaHd+= to_string(l);
        l++;
        return in;
    }
    friend ostream &operator << (ostream &out, HoaDon a) {
        cout<<a.MaHd<< " " <<a.TenKh << " " << a.address<< " ";
        cout<< a.TenMh << " " << a.DonVi << " " << a.Mua << " " << a.Ban;
        cout << a.SoLuong << " " << a.thanhtien <<endl; 
        return out;
    }
};
int KhachHang::j=1;
int MatHang::k=1;
int HoaDon::l=1;
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];   
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}