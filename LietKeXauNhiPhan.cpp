#include <bits/stdc++.h>
using namespace std;
void process(int n) {
    int a[n];
    for (int i=0;i<n;i++) {
        a[i]=0;
        cout<<a[i];
    }
    cout<<" ";
    int k=n-1;
    while (k!=n) {
        for (int i=n-1;i>=0;i--) {
            if (a[i]==0) {
                k=i;
                break;
            } else k=n;
        }
        if (k!=n)  {
        	for (int i=k;i<n;i++) a[i]=1-a[i];
        	for (int i=0;i<n;i++) cout<<a[i];
		}
        cout<<" ";
    }
    cout<<endl;
}
int main () {
    int t;
    cin >> t;
    while (t--) {
    	int n;
   	 	cin >> n;
   		process(n);
	}
}
