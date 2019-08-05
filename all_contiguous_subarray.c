#include <stdio.h>

void find_conti_subarrays(int arr[],int n) {
    for (int i = 0; i < n; i++) {
       for (int j = i ; j < n; j++) {
	       for(int k=i;k<=j;k++) {
             		 printf("%d ",arr[k]);
     		 }
	       printf("\n");
    	  }
    }
}
int main(int argc,char *argv[]) {
	int arr[argc-1],k=0,i=0;
	for(i=1;i<argc;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	find_conti_subarrays(arr,k);
	return 0;
}

