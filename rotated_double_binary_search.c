#include <stdio.h>

int find_pivot(int arr[],int size,int num) {
	int pivot=-1;
	for(int i=0;i<size-1;i++) {
		if(arr[i]>arr[i+1]) {
			pivot=i+1;
			break;
		}
	}
	return pivot;
	
}
int binary_search(int arr[],int low,int high,int num) {
	if(low>high)
		return -1;
	int mid=low+(high-low)/2;
	if(arr[mid]==num) {
		return mid;
	}
	if(num>arr[mid]) {
		return binary_search(arr,mid+1,high,num);
	}
		return binary_search(arr,low,mid-1,num);
}

int main(int argc,char *argv[]) {
	int arr[argc-1],k=0,i=0;
	for(i=1;i<argc-1;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	int num=atoi(argv[argc-1]);
	int in=find_pivot(arr,k,num);
	int index=binary_search(arr,0,in,num);
	int index1=binary_search(arr,in+1,k-1,num);
	if(index==-1 && index1==-1)
		printf("Element not present");
	else if(index!=-1)
		printf("Element present at index %d ",index);
	else if(index1!=-1)
		printf("Element present at index %d ",index1);
	return 0;
}
