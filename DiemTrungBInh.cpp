#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,dem=0;
	cin >> n;
	float a[100];
	for (int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	float min=a[0],max=a[n-1],tb=0;
	for (int i=0;i<n;i++)  {
		if (a[i] != min && a[i] != max) {
			tb+=a[i];
			dem++;
		}
	}
	printf("%0.2f",tb/dem);
}
