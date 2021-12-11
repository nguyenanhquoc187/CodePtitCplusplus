#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
    while(s[0]==' ') s.erase(0,1);
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
        if(s[i]==' ' &&s[i+1]==' '){
            s.erase(i+1,1);
            i--;
        }
    }
            if (s[0] >='a' && s[0] <='z') s[0]-=32;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ' && s[i+1]!=' ') s[i+1]-=32;
    }
}
class SinhVien{
private:
    string ma="B20DCCN",ten,lop,ns;
public:
    static int j;
    double gpa;
    friend istream &operator>> (istream &in,SinhVien &x){
        scanf("\n");
        getline(cin,x.ten);
        cin >> x.lop >> x.ns >> x.gpa;
        if(j<10) x.ma+="00"; else x.ma+="0";
        x.ma+=SinhVien::j+'0';
        while (x.ns.size() < 10){
	    	if (x.ns[2]!='/') x.ns.insert(0,"0");
	    	if (x.ns[5]!='/') x.ns.insert(3,"0");
	    }
        chuanhoa(x.ten);
        x.j++;
        return in;
    }
    friend ostream &operator<< (ostream &out,SinhVien &x){
        cout << x.ma << " " << x.ten << " " << x.lop << " " << x.ns << " ";
        cout << fixed << setprecision(2) << x.gpa << endl;
        return out;
    }
};
void sapxep(SinhVien ds[],int N){
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(ds[i].gpa<ds[j].gpa) swap(ds[i],ds[j]);
        }
    }
}
int SinhVien::j=1;
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
