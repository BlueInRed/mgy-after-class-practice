#include <iostream> 
#include <cstdio>
#include <string>
using namespace std;

string s,from,to,str[1005];
int sum=1;
string cnt;

int main(void)
{
	getline(cin,s);
	cin>>from>>to;
	
	for(int i=0;i<s.length();i++)
		if(s[i]!=' ') str[sum]+=s[i];
		else sum++;
	
	for(int i=1;i<=sum;i++)
		if(str[i]==from)
			str[i]=to;
	
	for(int i=1;i<=sum;i++)
		cout<<str[i]<<" ";
	
	return 0;
}
