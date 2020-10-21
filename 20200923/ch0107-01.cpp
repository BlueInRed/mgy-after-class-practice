#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string s;

int main(void)
{
	getline(cin,s);
	
	int cnt=0;
	for(int i=0;i<s.length();i++)
		if(s[i]>='0'&&s[i]<='9')
			++cnt;
	
	cout<<cnt<<endl;
	
	return 0;
}
