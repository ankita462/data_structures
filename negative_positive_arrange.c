#include <stdio.h>

int main(int argc,char *argv[])
{
	int i=0,arr[argc-1],k=0,k1=0,c=0,c1=0,c2=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int arr1[100],arr2[100],arr3[100],arr4[100];
	for(i=0;i<k;i++)
	{
		if(arr[i]==0)
		{
			arr1[k1]=arr[i];
			k1++;
		}
		if(arr[i]>0)
		{
			arr2[c]=arr[i];
			c++;
		}
		if(arr[i]<0)
		{
			arr3[c2]=arr[i];
			c2++;
		}
	}
	int r=0,t=0,h=0;
	while(c!=r && c2!=t)
	{
		arr4[h]=arr3[t];
		h++;
		t++;
		arr4[h]=arr2[r];
		h++;
		r++;
	}
	while(c!=r)
	{
		arr4[h]=arr2[r];
		h++;
		r++;
	}
	while(c2!=t)
	{
		arr4[h]=arr3[t];
		h++;
		t++;
	}
	for(i=0;i<k1;i++)
	{
		printf("%d ",arr1[i]);
	}
	for(i=0;i<h;i++)
	{
		printf("%d ",arr4[i]);
	}
	return 0;
}
