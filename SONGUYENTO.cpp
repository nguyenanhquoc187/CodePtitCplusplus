#include <iostream>
#include <math.h>
using namespace std;
int  songuyento (long int n) {
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++) {
		if (n%i==0) return 0;
	}
	return 1;
}
int main () {
	long int n;
	cin>>n;
	if (songuyento(n)) cout<<"YES"; else cout<<"NO";
}
