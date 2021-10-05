#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
long long s=a+b,x=1,y=1,s1=0,s2=0;
int d,e;
while(a>0){
d=a%10;
if(d==6) {s1=s1+x;}
if(d==5) {s2=s2+x;}
a=a/10;
x=x*10;
}
while(b>0){
e=b%10;
if(e==6) {s1=s1+y;}
if(e==5) {s2=s2+y;}
b=b/10;
y=y*10;
}
long long sl=s+s2,sn=s-s1;
cout<<sn<<" "<<sl<<endl;
}
}

