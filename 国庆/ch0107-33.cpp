#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

string s;

int main(void)
{
	cin>>s;
	
	string tmp=s;
	reverse(s.begin(),s.end());
	
	if(s==tmp) puts("yes");
	else puts("no");
	
	return 0;
}
