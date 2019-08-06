#include <stdio.h>

int hamming_distance(int arr[],int n) {
	int arr1[n],k=0;
	for(int i=0;i<n;i++) {
	arr1[k]=arr[i];
	k++;
	}
	printf("\n");
	int i=0,c=0,max=0,r=0;
	for(i=0;i<n;i++) {
		c=0;
		rotate(arr1,k);
	for(int j=0;j<n;j++) {
		if(arr[j]!=arr1[j]) {
			c++;
		}
		
	}
	if(c>max) {
		max=c;
		r=i;
	}
	if(max==n)
		break;
	}
	printf("minimum rotation: %d\n",r+1);
	return max;
}

void rotate(int arr[],int n) {
	int temp=arr[n-1];
	for(int i=n-1;i>0;i--) {
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
}

int main(int argc,char *argv[]) {
	 int arr[argc-1],i=0,k=0;
	 for(i=1;i<argc;i++) {
		 arr[k]=atoi(argv[i]);
		 k++;
	 }
	 int hd=hamming_distance(arr,k);
	 printf("hamming distance: %d ",hd);
	 return 0;
}

