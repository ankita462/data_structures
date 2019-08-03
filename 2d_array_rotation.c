#include <stdio.h>
# define m 4
#define n 4

void rotate(int arr[m][n],int row,int column) {
	int m1=m;
	int n1=n;
	int c=0,prev=0;
	if(row>m || column>n)
		return;
	if(row+1==m || column+1==n)
		return;
	c++;
	if(c==2) {
		prev=arr[row][column];
		printf("%d\n",prev);
	}
	if(c==1)
		prev=arr[row+1][column];
	int curr=0;
	for(int i=0;i<n;i++) {
		curr=arr[row][i];
		arr[row][i]=prev;
		prev=curr;
	}
	row++;
	for(int i=row;i<n;i++) {
		curr=arr[i][n-1];
		arr[i][n-1]=prev;
		prev=curr;
	}
	n1--;
	for(int i=n1-1;i>=column;i--) {
		curr=arr[m-1][i];
		arr[m-1][i]=prev;
		prev=curr;
	}
	m1--;
	for(int i=m1-1;i>=row;i--) {
		curr=arr[i][column];
		arr[i][column]=prev;
		prev=curr;
	}
	row++;
	column++;
	rotate(arr,row,column);
}

int main(int argc,char *argv[]) {
	int arr[m][n],k=1;
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
//	int r=atoi(argv[argc-1]);
//	for(int i=0;i<r;i++) {
		rotate(arr,0,0);
//	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
