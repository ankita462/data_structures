#include <stdio.h>

int main(int argc,char *argv[]) {
	int arr[argc-1],i=0,k=0;
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int element=atoi(argv[argc-1]);
	int high=k-1;
	int a=binary_single_search(arr,0,high,element);
	if(a==-1)
		printf("Element not found");
	else
		printf("Element found at index %d ",a);
	return 0;
}
int binary_single_search(int arr[],int low,int high,int element) {
	if(low>high)
		return -1;
	int mid=low+(high-low)/2;
	if(arr[low]<arr[mid] && element<arr[mid] && element>arr[low])
	{
		return binary_single_search(arr,mid-1,high,element);
	}
	else if(arr[mid+1]<arr[high] && element>arr[mid+1] && element<arr[high])
	{
		return binary_single_search(arr,mid+1,high,element);
	}
	else if(element==arr[mid])
	{
		return mid;
	}
}
	  
