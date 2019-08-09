#include <stdio.h>
#define m 3
#define n 3

int main(int argc,char *argv[]) {
	int arr[m][n],k=1,i=0,j=0;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	lower_matrix(arr,m,n);
	upper_matrix(arr,m,n);
	return 0;
}
void lower_matrix(int arr[m][n],int m1,int n1) {
	printf("Lower matrix\n");
	for(int i=0;i<m1;i++) {
		for(int j=0;j<n1;j++) {
			if(i<j) 
				printf("0 ");
			else 
				printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void upper_matrix(int arr[m][n],int m1,int n1) {
	printf("Upper matrix\n");
	for(int i=0;i<m1;i++) {
		for(int j=0;j<n1;j++) {
			if(i>j) 
				printf("0 ");
			else 
				printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
