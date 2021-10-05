#include<iostream>
#include<math.h>
using namespace std;
int kt(int n){
	if(n==1) return 1;
	if(n%2==0) return 2;
	for(int i=3;i<=sqrt(n);i++){
		if(n%i==0) return i; 
	} 
	return n; 
} 
main(){
	int t,n;
	cin>> t;
	while(t--){
		cin>> n;
		for(int i=1;i<=n;i++){
			cout << kt(i) <<" "; 
		} 
		cout <<endl; 
	} 
}
