#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(void)
{
	string s;
	cin>>s;
	
	if(s[0]>='0'&&s[0]<='9') {puts("no");return 0;}
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A'&&s[i]<='Z') continue;
		else if(s[i]>='a'&&s[i]<='z') continue;
		else if(s[i]>='0'&&s[i]<='9') continue;
		else if(s[i]=='_') continue;
		else
		{
			puts("no");
			return 0;
		}
	}
	
	puts("yes");
	
	return 0;
}
