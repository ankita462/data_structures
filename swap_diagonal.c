#include <stdio.h>
#define m 4
#define n 4

int main(int argc,char *argv[]) {
	int arr[m][n],k=1,i=0,j=0;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	swap_diagonal(arr,m,n);
	return 0;
}

void swap_diagonal(int arr[m][n],int m1,int n1) {
	int temp;
	for(int i=0;i<m1;i++) {
		for(int j=0;j<n1;j++) {
			if(i==j) {
		       		temp=arr[i][j];
				arr[i][j]=arr[i][n-1-j];
				arr[i][n-1-j]=temp;
			}
		}
	}
	for(int i=0;i<m1;i++) {
		for(int j=0;j<n1;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}		
