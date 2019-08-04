#include <stdio.h>

int main(int argc,char *argv[]) {
	int arr[argc-1],k=0,i=0;
	for(i=1;i<argc;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	reverse_rotation(arr,k);
	for(i=0;i<k;i++) {
		printf("%d ",arr[i]);
	}
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
