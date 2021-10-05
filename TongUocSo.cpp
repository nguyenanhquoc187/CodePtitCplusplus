#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n;
    long tong = 0 ;
    int t;
    cin >> t;
    while(t--){
    	cin >> n;
    	int sum = 0;
    	while(n % 2 == 0){
    		sum += 2;
    		n /= 2;
    	}
    	
    	for(int b = 3  ; b <= sqrt(n) ; b+=2){
    
    		while(n % b == 0){
    			sum += b;
    			n /= b;
    		}
    	}
    	
    	if(n>1) sum += n;
    	tong += sum ;
    }
    cout<<tong;

}
