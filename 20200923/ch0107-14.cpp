#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string s;

int main(void)
{
	getline(cin,s);
	
	for(int i=0;i<s.length();i++)
		if(s[i]>='a'&&s[i]<='z') s[i]=char(s[i]-32);
		else if(s[i]>='A'&&s[i]<='Z') s[i]=char(s[i]+32);
	
	cout<<s<<endl;
	
	return 0;
}
