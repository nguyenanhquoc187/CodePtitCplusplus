#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		double x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		cout << fixed ;
			cout<<setprecision(4)<<sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))<<endl;
	}
}
