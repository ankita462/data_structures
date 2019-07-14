#include <stdio.h>

int main(int argc,char *argv[]) {
	int i=0,arr[argc-1],arr1[argc-1],j=0;
	for(i=1;i<argc;i++)
	{
		arr[j]=atoi(argv[i]);
		j++;
	}
	reverse(arr,j,arr1,0);
	for(i=0;i<j;i++)
	{
		printf("%d ",arr1[i]);
	}
	return 0;
}
void reverse(int arr[],int n,int arr1[],int k1)
{
	if(n==0)
		return;
	else
	{
		arr1[k1]=arr[n-1];
		k1++;
	}
	reverse(arr,n-1,arr1,k1);
}
