#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int a[100][100],b[10][10];
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
	cin>>m;
	for(int i=1;i<=m;i++)  for(int j=1;j<=m;j++) cin>>b[i][j];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int x=i%m,y=j%m;
			if(x==0) x=m;
			if(y==0) y=m;
			a[i][j]*=b[x][y];
		}
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
