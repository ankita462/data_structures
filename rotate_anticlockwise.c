#include <stdio.h>
#define m 4
#define n 4

void rotate(int arr[m][n],int row,int col,int m1,int n1) {
	if(row>m/2 || col>n/2)
		return;
	int prev=0,curr=0;
	prev=arr[row][col];
	for(int i=col+1;i<n1;i++) {
		curr=arr[i][col];
		arr[i][col]=prev;
		prev=curr;
	}
	for(int i=col+1;i<n1;i++) {
		curr=arr[m1-1][i];
		arr[m1-1][i]=prev;
		prev=curr;
	}
	for(int i=n1-2;i>=col;i--) {
		curr=arr[i][n1-1];
		arr[i][n1-1]=prev;
		prev=curr;
	}
	for(int i=n1-2;i>=row;i--) {
		curr=arr[col][i];
		arr[col][i]=prev;
		prev=curr;
	}
	rotate(arr,++row,++col,--m1,--n1);
}



int main(int argc,char *argv[]) {
	int arr[m][n],k=1;
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			arr[i][j]=atoi(argv[k]);
			k++;
		}
	}
	int n1=n;
	int m1=m;
	int r=atoi(argv[argc-1]);
	for(int i=0;i<r;i++) {
	rotate(arr,0,0,m1,n1);
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
