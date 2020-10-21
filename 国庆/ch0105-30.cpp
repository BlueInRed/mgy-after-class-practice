#include <cstdio>
int m,k;

bool check()
{
	int cnt=0;
	while(m)
	{
		if(m%10==3) cnt++;
		m/=10;
	}
	return cnt==k;
}

int main(void)
{
	scanf("%d%d",&m,&k);
	
	if(m%19==0&&check())
		puts("YES");
	else
		puts("NO");
	
	return 0;
}
