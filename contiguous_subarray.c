#include <stdio.h>

int main(int argc,char *argv[])
{
	int arr[argc-1],i=0,k=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	subarray(arr,k);
	return 0;
}
void subarray(int arr[],int k)
{
	int sum=0,s=0,start=0,end=0;
	for(int i=0;i<k;i++)
	{
		sum=sum+arr[i];
		if(sum<0)
		{
			sum=0;
			start=i+1;
		}
		if(sum>s)
		{
			s=sum;
			end=i;
		}
	}
	printf("start index %d last index %d",start,end);
	printf("\nsum is %d\n",s);
	for(int i=start;i<=end;i++)
	{
	printf("%d ",arr[i]);
	}	
}
