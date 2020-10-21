#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string s;
char from,to;

int main(void)
{
	cin>>s;
	cin>>from>>to;
	
	for(int i=0;i<s.length();i++)
		if(s[i]==from)
			s[i]=to;
	
	cout<<s<<endl;
	
	return 0;
}
