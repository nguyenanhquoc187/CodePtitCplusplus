#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin>>t;	
	char a[15]= {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'}; 
	char b[15]= {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	while (t--) {
		int de;
		char s[16][2];
		double diem,dem=0;
		cin>>de;
		for (int i=0;i<15;i++) cin>>s[i];
		if (de==101) {
			for (int i=0;i<15;i++) {
				if ( s[i][0]==a[i]) {
					dem++;
				}
			}
		} else {
			for (int i=0;i<15;i++) {
				if ( s[i][0]==a[i] ) {
				dem++;
				}
			}
		}
		diem= (double) (dem*10/15);
		cout<<fixed;
		cout<<setprecision(2)<<diem<<endl;
	}
}
