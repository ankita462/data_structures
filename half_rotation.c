#include <stdio.h>

int main(int argc,char *argv[]){
	int arr[argc-1],i=0,k=0,j=0;
	for(i=1;i<argc-1;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int r=atoi(argv[argc-1]);
	for(i=0;i<r;i++)
	{
		int temp=arr[k/2-1];
		for(j=k/2-1;j>0;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
	for(i=0;i<r;i++)
	{
		int temp=arr[k/2];
		for(j=k/2;j<k;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[k-1]=temp;
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",arr[i]);
	
	}
	return 0;
}

