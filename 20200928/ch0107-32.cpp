#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

string s;

int main(void)
{
	cin>>s;
	for(int i=0;i<s.length();i++)
		if(s[i]>='a'&&s[i]<='z')
			s[i]-=32;

	int cnt=0;
	for(int i=0;i<s.length();i++)
	{
		++cnt;
		if(s[i]!=s[i+1])
		{
			cout<<"("<<s[i]<<","<<cnt<<")";
			cnt=0;
		}
	}	

	return 0;
}
