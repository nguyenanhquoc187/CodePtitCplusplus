#include <iostream>
using namespace std;
int main() {
	string s1,s2;
	fflush(stdin);
	getline(cin,s1);
	cin>>s2;
	while (s1.find(s2) != string::npos ) {
		s1.erase(s1.find(s2), s2.length() + 1 );
	}
	cout<<s1;
}
