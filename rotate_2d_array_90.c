#include <stdio.h>
#define m 3
#define n 3

void swap(int *a,int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}

void transpose(int arr[m][n]) {
	for(int i=0;i<m;i++) {
		for(int j=i+1;j<n;j++) {
			swap(&arr[i][j],&arr[j][i]);
		}
	}
}

void mirror(int arr[m][n]) {
	for(int i=0;i<m;i++) {
		for(int j=0;j<n/2;j++) {
			swap(&arr[i][j],&arr[i][n-j-1]);
		}
	}
}

int main(int argc,char *argv[]) {
	int arr[m][n],k=1;
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	transpose(arr);
	mirror(arr);
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


