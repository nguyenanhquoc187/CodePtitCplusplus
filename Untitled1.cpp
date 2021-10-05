#include<bits/stdc++.h>
using namespace std;
struct Point{
	double x, y;
};

void input(struct Point &a) {
	cin >>a.x>>a.y;
}

double distance(struct Point &a,struct Point &b) {
	return a.x*b.y;
}

int main(){
    struct Point a, b;
    int t;
    cin>>t;
    while(t--){
//    	input(A);input(B);
        cout << fixed << setprecision(4) << distance(a,b) << endl;
    }
    return 0;
} 
