#include <stdio.h>
# define m 5
#define n 5

void rotate(int arr[m][n],int row,int column,int m1,int n1) {
	int c=0,prev=0,curr=0;
	if(row>=m/2 || column>=n/2)
		return;
		prev=arr[row+1][column];
	for(int i=column;i<n1;i++) {
		curr=arr[row][i];
		arr[row][i]=prev;
		prev=curr;
	}
	for(int i=row+1;i<n1;i++) {
		curr=arr[i][n1-1];
		arr[i][n1-1]=prev;
		prev=curr;
	}
	for(int i=n1-2;i>=column;i--) {
		curr=arr[m1-1][i];
		arr[m1-1][i]=prev;
		prev=curr;
	}
	for(int i=m1-2;i>column;i--) {
		curr=arr[i][column];
		arr[i][column]=prev;
		prev=curr;
	}
	rotate(arr,++row,++column,--m1,--n1);
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
//	int r=atoi(argv[argc-1]);
//	for(int i=0;i<r;i++) {
	rotate(arr,0,0,m1,n1);
//	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int left=0,top=0,right=n-1,bottom=m-1;
	while(left<=right && top<=bottom){
		for(int i=left;i<=right;i++){
			printf("%d ",arr[top][i]);
		}
		top++;
		for(int i=top;i<=bottom;i++){
			printf("%d ",arr[i][right]);
		}
		right--;
		if(top<=bottom){
		for(int i=right;i>=left;i--){
			printf("%d ",arr[bottom][i]);
		}
		bottom--;
		}
		if(left<=right){
			for(int i=bottom;i>=top;i--){
				printf("%d ",arr[i][left]);
			}		
		left++;
		}
	}
	return 0;
}
