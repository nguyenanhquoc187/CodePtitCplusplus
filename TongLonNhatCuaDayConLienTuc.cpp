#include<bits/stdc++.h>
using namespace std;
long maxSubArraySum(long a[], long n) 
{ 
   long max_so_far = INT_MIN; 
   long curr_max = INT_MIN; 
   for (long i = 0; i < n; i++) 
   { 
        curr_max = max(a[i], curr_max+a[i]); 
        max_so_far = max(max_so_far, curr_max); 
   } 
   return max_so_far; 
} 
int main() 
{ 
    long n,T;
    cin >> T;
    while(T--)
    {
    	cin >> n;
    	long a[10000];
    	for(long i = 0; i < n; i++)
    		cin >> a[i];
		cout << maxSubArraySum(a,n) << endl;
	}
    return 0; 
}