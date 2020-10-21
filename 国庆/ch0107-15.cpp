#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	while(n--)
	{
		string s;
		cin>>s;
		if(s[0]>='a'&&s[0]<='z') s[0]-=32;
		for(int i=1;i<s.length();i++)
			if(s[i]>='A'&&s[i]<='Z')
				s[i]+=32;
		cout<<s<<endl;
	}
	
	return 0;
}
