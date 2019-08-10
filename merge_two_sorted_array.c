#include <stdio.h>
#include <stdlib.h>

int* merge_array(int arr[],int arr1[],int n1,int n2) {
	int h=0,s=0,t=0;
	int *arr2;
	arr2=(int*)malloc(n1+n2 * sizeof(int));
	while(h!=n1 && s!=n2) {
		if(arr[h]<=arr1[s]) {
			arr2[t]=arr[h];
			t++;
			h++;
		}
		else {
			arr2[t]=arr1[s];
			t++;
			s++;
		}
	}
	while(h!=n1) {
		arr2[t]=arr[h];
		t++;
		h++;
	}
	while(s!=n2) {
		arr2[t]=arr1[s];
		t++;
		s++;
	}
	for(int i=0;i<t;i++) {
		printf("%d ",arr2[i]);
	}
	printf("\n");
	return arr2;
}


int main(int argc,char *argv[]) {
	int n1=atoi(argv[1]);
	int n2=atoi(argv[2]);
	int arr[n1],arr1[n2],*arr2,k=0,k1=0;
	for(int i=3;i<=n1+2;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	for(int i=k+3;i<k+n2+3;i++) {
		arr1[k1]=atoi(argv[i]);
		k1++;
	}
	for(int i=0;i<k;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(int i=0;i<k1;i++) {
		printf("%d ",arr1[i]);
	}
	printf("\n");
	arr2=merge_array(arr,arr1,n1,n2);
	for(int i=0;i<k+k1;i++) {
		printf(" %d ",arr2[i]);
	}
	return 0;
}
