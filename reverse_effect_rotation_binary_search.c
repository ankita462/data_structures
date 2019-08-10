#include <stdio.h>

int main(int argc,char *argv[]) {
	int arr[argc-1],k=0,i=0;
	for(i=1;i<argc-1;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	int num=atoi(argv[argc-1]);
	reverse_rotation(arr,k);
	for(i=0;i<k;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	int f=binary_search(arr,0,k-1,num);
	if(f==-1) 
		printf("number ts not present");
	else
		printf("number is present at index %d ",f);
	return 0;
}
int find_pivot(int arr[],int size) {
	int pivot=-1;
	for(int i=0;i<size-1;i++) {
		if(arr[i]>arr[i+1]) {
			pivot=i+1;
			break;
		}
	}
	return pivot;
}

void reverse_rotation(int arr[],int n) {
	int pivot=find_pivot(arr,n);
	int diff=n-pivot;	
	int temp;
	if(diff>pivot) {
		for(int i=0;i<pivot;i++) {
			temp=arr[0];
			for(int j=0;j<n;j++) {
				arr[j]=arr[j+1];
			}
			arr[n-1]=temp;
		
		}
	}
	else {
		for(int i=0;i<diff;i++) {
			temp=arr[n-1];
			for(int j=n-1;j>=0;j--) {
				arr[j]=arr[j-1];
			}
			arr[0]=temp;
		}
	}
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

