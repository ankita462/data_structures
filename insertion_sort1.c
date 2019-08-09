#include <stdio.h>

void insertion_sort(int arr[],int n) {
	int temp;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			while(arr[i]>arr[j] && j>=0) {
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
				j=j-1;
			}
		}
	}
}

int main(int argc,char *argv[]) {
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	insertion_sort(arr,k);
	for(int i=0;i<k;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}
