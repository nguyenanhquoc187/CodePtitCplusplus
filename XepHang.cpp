#include<bits/stdc++.h>
using namespace std;
struct khach
{
	int entry;
	int exit;
};
void sapxep(khach a[],int n) {
	for (int i=0;i<n;i++) {
		for (int j=i+1;j<n;j++) {
			if (a[i].entry > a[j].entry ) swap(a[i],a[j]);
		}
	}
}
main()
{
	int n;
	khach a[100];
	cin >> n;
	for (int i=0;i<n;i++)	cin>> a[i].entry>>a[i].exit;
	sapxep(a,n);
	long long sum = a[0].entry+a[0].exit;
	for (int i=0;i<n-1;i++) {
		if (sum >= a[i+1].entry) sum = sum + a[i+1].exit;
		else sum = a[i+1].entry + a[i+1].exit;
	}
	cout << sum;
}
