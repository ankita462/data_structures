#include <stdio.h>

int main(int argc,char *argv[])
{
	int arr[argc-1],k=0,i=0;
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int element=atoi(argv[argc-1]);
	int high=k-1;
	int a=binary_search(arr,0,high,element);
	if(a==-1)
	{
		printf("Element not found");
	}
	else
	{
		printf("Element found at %d",a);
	}
	return 0;
}
int binary_search(int arr[],int low,int high,int element)
{
	if(low>high)
		return -1;
	int mid=low+(high-low)/2;
	if(element==arr[mid])
	{
		return mid;
	}
	if(element>arr[mid])
	{
		return binary_search(arr,mid+1,high,element);
	}
	return binary_search(arr,low,mid-1,element);
}
