#include <stdio.h>

void swap(int *a,int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}

void selection_sort(int arr[],int n) {
	int index=0;
	for(int i=0;i<n-1;i++) {
		index=i;
		for(int j=i+1;j<n;j++) {
			if(arr[j]<arr[index]) { 
				index=j;
			}
		}
			swap(&arr[index],&arr[i]);
	}
}

int main(int argc,char *argv[]) {
	int arr[argc-1],k=0,i=0;
	for(i=1;i<argc;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	selection_sort(arr,k);
	for(i=0;i<k;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}
