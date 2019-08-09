#include <stdio.h>
#define m 4

void rotate_m3(int arr[m][m]) {
	int temp,temp1,temp2,i=0,j=0;
	for(int k=0;k<m/2;k++) {
		for(i=k,j=k;i<m-1-k,j<m-1-k;i++,j++) {
			temp=arr[i][m-1-k];
			arr[i][m-1-k]=arr[k][j];
			temp1=arr[m-1-k][m-1-j];
			arr[m-1-k][m-1-j]=temp;
			temp2=arr[m-1-i][k];
			arr[m-1-i][k]=temp1;
			arr[k][j]=temp2;
		}
	}
}


int main(int argc,char *argv[]) {
	int arr[m][m],k=1;
	for(int i=0;i<m;i++) {
		for(int j=0;j<m;j++) {
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	rotate_m3(arr);
	for(int i=0;i<m;i++) {
		for(int j=0;j<m;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
