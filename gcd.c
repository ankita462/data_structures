#include <stdio.h>

int main(int argc,char *argv[]) {
	int arr[argc-1],i=0,j=0,k=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int temp=arr[0];
	for(i=1;i<k;i++)
	{
		temp=gcd(arr[i],temp);
	}
	printf("%d ",temp);
	return 0;
}
int gcd(int a,int b)
{
	int i=0,gcd=0;
	for(i=1;i<=a,i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	return gcd;
}
