#include <cstdio>
long long n;

int main(void)
{
	scanf("%lld",&n);
	
	while(n!=1)
	{
		if(n%2!=0) 
		{
			printf("%lld*3+1=%lld\n",n,n*3+1);
			n=n*3+1;
		}
		else 
		{
			printf("%lld/2=%lld\n",n,n/2);
			n/=2;
		}
	}
	
	puts("End");
	
	return 0;
}
