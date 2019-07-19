#include <stdio.h>

int main(int argc,char *argv[])
{
	int i=0,k=0,arr[argc-1];
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int *ptr=arr;
	for(i=0;i<k;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}
