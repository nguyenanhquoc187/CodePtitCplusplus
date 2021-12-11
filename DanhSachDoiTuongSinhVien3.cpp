#include<bits/stdc++.h>
using namespace std;
class SinhVien {
private:
    string masv="B20DCCN",name,lop,date;
	float point;
public:
    static int j;
    float getGpa() {
        return point; 
    }
    void chuanhoa() {
        while (name[0]== ' ') {
            name.erase(0,1);
        }
        while( name[ name.size() - 1 ] ==' ' ) name.erase(name.size() - 1,1);
        for (int i=0;i<name.size();i++) {
            if (name[i]== ' ' && name[i+1]==' ') {
                name.erase(i,1);
                i--;
            }
        }
        transform(name.begin(), name.end(),name.begin(), ::tolower );
        if (name[0] >='a' && name[0] <='z') name[0]-=32;
        for (int i=1;i<name.size();i++) if (name[i]==' ' && name[i+1] >='a' && name[i+1] <='z' ) name[i+1]-=32;
    }
    friend istream &operator >> (istream &in, SinhVien &ds)  {
        cin.ignore(10000, '\n');
    	getline(cin,ds.name);
    	cin>>ds.lop>>ds.date>>ds.point;
    	while (ds.date.size() <10) {
	    	if (ds.date[2]!='/') ds.date.insert(0,"0");
	    	if(ds.date[5]!='/') ds.date.insert(3,"0");
	    }
        if (ds.j<=9) ds.masv=ds.masv +"00" + to_string(j); else ds.masv=ds.masv + "0" + to_string(j);
        ds.j++;
        ds.chuanhoa();
        return in; 
    } 
    friend ostream &operator << (ostream &out, SinhVien ds) {
        cout<<ds.masv<<" "<<ds.name<<" "<<ds.lop<<" "<<ds.date<<" ";
    	cout << fixed << setprecision(2)<<ds.point<<endl;
        return out;
    }
};
bool cmp(SinhVien a, SinhVien b) {
    return a.getGpa() > b.getGpa();
}
void sapxep(SinhVien ds[], int N) {
    sort(ds,ds+N,cmp);
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