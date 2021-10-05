#include<bits/stdc++.h>
using namespace std;
#define tester()	int t;cin >> t;while(t--)
#define FOR(i,a,b)	for(int i = a;i <b;i++)
main()
{
	int m,n,k;
	cin >> n>>m;
	map<int,int>as;
	int max = 0;
	FOR(i,0,n)
	{
		cin>> k;
		as[k]++;
		if(max < as[k])	max = as[k];
	}
	map<int,int >tmp;
	for(auto it:as)
	{
		tmp[it.second]=it.first;
	}
	if(tmp.size()==1)	cout <<"NONE";
	else
	{
		auto it2 = tmp.rbegin();it2--;
		cout << (*it2).second;
	}
}
