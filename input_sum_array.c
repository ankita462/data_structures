#include <stdio.h>

int main(int argc,char *argv[])
{
	int end=0,start=0,sum1=0,arr[argc-1],k=0,i=0,flag=0;
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
			k++;
	}
	int sum=atoi(argv[argc-1]);
	for(i=0;i<k;i++)
	{
		sum1=sum1+arr[i];
		if(sum1<0)
		{
		sum1=0;
		start=i+1;
		}
		if(sum==sum1)
		{
				end=i;
				flag=1;
		}
		if(sum!=sum1)
		{
				flag=0;
		}
	}
	if(flag==1)
	{
	printf("%d   %d\n",start,end);
	for(i=start;i<=end;i++)
	{
		printf("%d ",arr[i]);
	}
	}
	else if(flag==0)
	{
		printf("sum not found");
	}
	return 0;
	}
