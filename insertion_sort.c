#include <stdio.h>

void insertion_sort(int arr[],int n) {
	int num=0,j=0;
	for(int i=1;i<n;i++) {
		num=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>num) {
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=num;
	}
}

int main(int argc,char *argv[]) {
	int arr[argc-1],k=0,i=0;
	for(i=1;i<argc;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	insertion_sort(arr,k);
	for(i=0;i<k;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}

