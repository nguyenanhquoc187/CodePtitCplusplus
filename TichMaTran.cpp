#include <bits/stdc++.h>
using namespace std;
int a[100][100],n[100][100];
void tichmatran(int a[][100], int b[][100],int c[][100],int n, int m, int p) {
		for (int i=1;i<=n;i++) {
			for (int l=1;l<=p;l++) {
				for (int j=1;j<=m;j++) {
					c[i][l] += a[i][j] * b[j][l] ;
					
				}
			}	
		}
}
void inmatran(int a[][100],int n, int m) {
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=m;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
void nhapmatran(int a[][100], int n, int m) {
	for (int i=1;i<=n;i++) for (int j=1;j<=m;j++) cin>>a[i][j];
}
int main () {
	int n,m,p,a[100][100],b[100][100],c[100][100];
	cin>>n>>m>>p;
	nhapmatran(a,n,m); nhapmatran(b,m,p); tichmatran(a,b,c,n,m,p);
	inmatran(c,n,p);
	
}
