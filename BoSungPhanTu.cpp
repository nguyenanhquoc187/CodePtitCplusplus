#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a[100005],n,d=0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if( a[i+1]-a[i]-1>=0){
                d+=a[i+1]-a[i]-1;
            }
           
        }
        cout << d << endl;
    }
}
