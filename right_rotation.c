#include <stdio.h>

int main(void)
{
	int n,arr[n],k,i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		int k1=arr[n-1];
		for(j=n-1;j>0;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=k1;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
