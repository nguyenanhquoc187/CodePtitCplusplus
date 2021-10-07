#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
double khoangcach(double x1,double y1,double x2,double y2) {
	double x=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return x;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		double x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		double a=khoangcach(x1,y1,x2,y2);
		double b=khoangcach(x2,y2,x3,y3);
		double c=khoangcach(x1,y1,x3,y3);
		if(a+b<=c||b+c<=a||a+c<=b) cout<<"INVALID"<<endl;
		else{
			double k=sqrt((a+b+c)*(a+b-c)*(-a+b+c)*(a-b+c))/4;
			k=(a*b*c)/(4*k);
			k*=PI*k;
			printf("%.3lf\n",k);
		}
	}
}
