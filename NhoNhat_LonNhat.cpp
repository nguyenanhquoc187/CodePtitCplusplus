#include<bits/stdc++.h>
using namespace std;
void Process(int m, int s) {
    string min="1",max;
    min.insert(1,m-1,'0');
    max.insert(0,m,'0');
    if (s > 9*m || (m>1 && s==0)  ) {
        cout<<"-1 -1";
    } else {
        int s2=s;
        if (s <= 9*(m-1) ) s=s-1;
        for (int i=min.size()-1;i>=0;i--) {
            if (s>9) {
                min[i]='9';
                s-=9;
            } else {
                min[i]= (char) (s+'0');
                s=0;
            }
            if (s==0) break;
        }
        for (int i=0;i<max.size();i++) {
            if (s2>9) {
                max[i]='9';
                s2-=9;
            } else {
                max[i]= (char) (s2+ '0');
                s2=0;
            }
            if (s2==0) break;
        }
        cout<<min<<" "<<max;
    }
    
    
}
int main () {
    int m,s;
    cin >> m >> s;
    Process(m,s);
}