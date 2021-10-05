#include<iostream> 
using namespace std; 
int main() { 
	int t; 
	cin>>t; 
	while(t--) { 
		int a[1000],n; 
		cin>>n; 
		for(int i=0;i<n;i++) 	cin>>a[i]; 
		int k=1,check=1; 
		while (check!=0) {
			for (int i=0;i<n;i++) {
				if (a[i]==k) {
					check=1;
					break;
				} else check=0;
			}
			if (check==0) cout<<k<<endl; else k++;
		}
//		while(1) { 
//			int stop=1; 
//			for(int i=0;i<n;i++) { 
//				if(a[i]==k ) { 
//				stop=0; break; 
//				} 
//			} 
//			if(stop==1) { 	
//				cout<<k; 
//				break; 
//			} else { 
//				k++; 
//			} 
//		} 
//		cout<<endl; 
	} 
	return 0; 
}
