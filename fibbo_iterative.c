#include <stdio.h>

int main(void)
{
	int n,i=0,a=0,b=1,c=0;
	scanf("%d",&n);
	printf("%d %d ",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}
