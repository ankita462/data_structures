#include <stdio.h>

int main(int argc,char *argv[])
{
	int arr[argc-1],i=0,k=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int r=arr[k-1];
	right_rotation(arr,k-1,r);
	return 0;
}
void right_rotation(int arr[],int size,int rotation)
{
	int ele_shift=size-rotation,j=0,k1=0,i=0,temp[rotation],k2=size-1;
	for(j=0;j<rotation;j++)
	{
		temp[k1]=arr[size-rotation+j];
		k1++;
	}
	for(i=0;i<ele_shift;i++)
	{
		arr[k2]=arr[k2-2];
		k2--;
	}
	for(i=0;i<rotation;i++)
	{
		arr[i]=temp[i];
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}

