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
		string p1,p2;
		cin>>p1>>p2;
		if(p1=="Rock")
			if(p2=="Scissors")
				puts("Player1");
			else if(p2=="Rock")
				puts("Tie");
			else
				puts("Player2");
		if(p1=="Scissors")
			if(p2=="Paper")
				puts("Player1");
			else if(p2=="Scissors")
				puts("Tie");
			else
				puts("Player2");
		if(p1=="Paper")
			if(p2=="Rock")
				puts("Player1");
			else if(p2=="Paper")
				puts("Tie");
			else
				puts("Player2");
				
	}
	
	return 0;
}
