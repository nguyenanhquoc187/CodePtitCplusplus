#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    long int a[10000];
    for (int i=2;i<=10000;i++){
        a[i]=1;
    }
    for (int i=2;i<=10000;i++) {
        if (a[i] == 1 ) {
            for (int j=2*i;j<=10000;j+=i) {
                a[j]=0;
            }
        }
    }
    int b[1000],x=0,dem=0;
    for (int i=2;i<=10000;i++) {
        if (a[i] == 1) {
            b[x]=i;
            x++;
        }
    }
    while (t--) {
        int n;
        cin>>n;
       	for (int i=1;i<=n;i++) {
    	if (i==1) cout<<i<<" "; 
    	if (i%2==0) cout<<2<<" "; else {
    		for (int j=0;j<x;j++) {
    			if (i%b[j]==0) {
    				cout<<b[j]<<" ";
    				break;
				}
			}
		}
	}
	cout<<endl;
    }
}
