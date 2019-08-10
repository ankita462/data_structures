#include <stdio.h>

/* Time complexity== O(n logn) Auxilliary space== O(n) */

void merge_sort(int arr[],int l,int r) {
	if(r>l) {
		int m=l+(r-l)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}

void merge(int arr[],int left,int mid,int right) {
	int n1=mid-left+1;
	int n2=right-mid;
	int arr1[n1],arr2[n2];
	for(int i=0;i<n1;i++) {
		arr1[i]=arr[left+i];
	}
	for(int j=0;j<n2;j++) {
		arr2[j]=arr[mid+j+1];
	}
	int h=0,t=0,s=left;
	while(h!=n1 && t!=n2) {
		if(arr1[h]<arr2[t]) {
			arr[s]=arr1[h];
			h++;
		}
		else {
			arr[s]=arr2[t];
			t++;
		}
		s++;
	}
	while(h!=n1) {
		arr[s]=arr1[h];
		h++;
		s++;
	}
	while(t!=n2) {
		arr[s]=arr2[t];
		s++;
		t++;
	}
}


int main(int argc,char *argv[]) {
	int arr[argc-1],k=0;
	for(int i=1;i<argc;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	merge_sort(arr,0,k-1);	
	for(int i=0;i<k;i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}


