#include <cstdio>
using namespace std;

int m,n;
int ans;

int main(void)
{
	scanf("%d%d",&m,&n);
	
	for(int i=1;i<=n;i++)
	{
		int x; scanf("%d",&x);
		if(m>=x) m-=x;
		else ans++;
	}
	
	printf("%d\n",ans);
	
	return 0;
}
