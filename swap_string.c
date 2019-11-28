#include <stdio.h>

int main(int argc,char *argv[])
{
	char c[argc];
	int k=0;
	for(int i=1;i<argc;i++)
	{
		c[k]=atoi(argv[i]);
		k++;
	}
	for(int i=0;i<k;i++)
	{
		printf("%c ",c[i]);
	}
	return 0;
}
