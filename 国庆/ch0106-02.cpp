#include <cstdio>
int a[15];
int h;

int main(void)
{
	for(int i=1;i<=10;i++)
		scanf("%d",&a[i]);
	scanf("%d",&h);
	
	h+=30;
	int ans=0;
	for(int i=1;i<=10;i++)
		if(h>=a[i])
			ans++;
	
	printf("%d\n",ans);
	
	return 0;
}
