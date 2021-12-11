#include<bits/stdc++.h>
using namespace std;
class MonHoc{
public:
    string mamh,tenmh;
    friend istream &operator >> (istream &in, MonHoc &a) {
        cin >> a.mamh;
        cin.ignore();
        getline(cin,a.tenmh);
        return in;
    }
};
class LichThi{
public:
    string mathi="T",mamh,date,hour,gr,tenmh;
    int gio,phut,day,month,year;
    static int j;
    friend istream &operator >> (istream &in, LichThi &a) {
        cin >> a.mamh ;
        cin>> a.date >> a.hour >> a.gr;
        if (j<=9) a.mathi=a.mathi + "00" + to_string(j); else a.mathi= a.mathi + "0" + to_string(j);
        j++;
        return in;
    }
    friend ostream &operator << (ostream &out, LichThi a) {
        cout<<a.mathi<<" " << a.mamh <<" " << a.tenmh << " " <<a.date<<" "<<a.hour<<" "<<a.gr<<endl;
        return out;
    }
};
int LichThi::j=1;
bool cmp(LichThi a, LichThi b) {
    if (a.date==b.date && a.gio==b.gio && a.phut==b.phut) return a.mamh < b.mamh;
    if (a.date==b.date && a.gio==b.gio && a.phut!=b.phut) return a.phut < b.phut;
    if (a.date==b.date && a.gio!=b.gio ) return a.gio < b.gio;
    if (a.date!=b.date && a.year==b.year && a.month==b.month) return a.day < b.day;
    if (a.date!=b.date && a.year==b.year && a.month!=b.month) return a.month < b.month;
    if (a.date!=b.date && a.year!=b.year ) return a.year < b.year;
}
void process(MonHoc mh[], int n, LichThi lt[], int m) {
    for (int i=0;i<m;i++) {
        for (int k=0;k<n;k++) {
            if (lt[i].mamh==mh[k].mamh) {
                lt[i].tenmh=mh[k].tenmh;
            }
        }
    }
    for (int i=0;i<m;i++) {
        lt[i].gio= (lt[i].hour[0] - '0')  * 10 + (lt[i].hour[1] - '0');
        lt[i].phut= (lt[i].hour[3] - '0')  * 10 + (lt[i].hour[4] - '0');
        lt[i].day = (  lt[i].date[0]-'0' ) * 10 + (  lt[i].date[1]-'0' ) ;
        lt[i].month= (  lt[i].date[3]-'0' ) * 10 + (  lt[i].date[4]-'0' ) ;
        lt[i].year = (  lt[i].date[6]-'0' ) * 1000 + (  lt[i].date[7]-'0' )*100  + (  lt[i].date[8]-'0' ) * 10 + (  lt[i].date[9]-'0' ) ;
    }
    sort(lt,lt+m,cmp);
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}
