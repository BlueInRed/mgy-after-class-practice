#include <cstdio>
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
using namespace std;

string ans[114514];
int cnt=1;

int main(void)
{
	string s;
	getline(cin,s);
	
	for(int i=0;i<s.length();i++)
		if(s[i]==' ')
			cnt++; 
		else
			ans[cnt]+=s[i];
	
	for(int i=cnt;i>=1;i--)
		cout<<ans[i]<<' ';
	
	return 0;
}
