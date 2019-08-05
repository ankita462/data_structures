#include <stdio.h>
#define m 2
#define n 2

int main(int argc,char *argv[]) {
	int arr1[m][n],arr[m][n],k=1,i=0,j=0;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			arr1[i][j]=atoi(argv[k]);
			k++;
		}
	}
	matrix_print(arr,m,n);
	matrix_print(arr1,m,n);
	matrix_add(arr,arr1,m,n);
	matrix_sub(arr,arr1,m,n);
	matrix_mul(arr,arr1,m,n);
	return 0;
}	
void matrix_add(int arr[m][n],int arr1[m][n],int m1,int n1) {
	int sum[m1][n1];
	for(int i=0;i<m1;i++) {
		for(int j=0;j<n1;j++) {
			sum[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	printf("Addition is: \n");
	matrix_print(sum,m1,n1);
}
void matrix_sub(int arr[m][n],int arr1[m][n],int m1,int n1) {
	int sub[m1][n1];
	for(int i=0;i<m1;i++) {
		for(int j=0;j<n1;j++) {
			sub[i][j]=arr[i][j]-arr1[i][j];
		}
	}
	printf("Subtraction is:\n");
	matrix_print(sub,m1,n1);
}
void matrix_mul(int arr[m][n],int arr1[m][n],int m1,int n1) {
	int mul[m1][n1];
	for(int i=0;i<m1;i++) {
		for(int j=0;j<n1;j++) {
			mul[i][j]=0;
			for(int k=0;k<m1;k++) {
				mul[i][j]+=arr[i][k]*arr1[k][j];
			}
		}
	}
	printf("Multiplication is:\n");
	matrix_print(mul,m1,n1);
}


			
void matrix_print(int arr[m][n],int m1,int n1) {
	for(int i=0;i<m1;i++) {
		for(int j=0;j<n1;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}


