#include <stdio.h>

int lcm(int a,int b) {
	int lar=0,small=0;
	if(a>b)
		lar = a;
	else	
    		lar = b; 
	if(a<b) 
		small=a;
	else
		small=b;
    	for (int i = lar; ; i += lar) { 
        	if (i % small == 0) 
            		return i; 
    } 
}

int main(int argc,char *argv[]) {
	int arr[argc-1],i=0,j=0,k=0;
	for(i=1;i<argc;i++)
	{
		arr[k]=atoi(argv[i]);
		k++;
	}
	int temp=arr[0];
	for(i=1;i<k;i++)
	{
		temp=lcm(arr[i],temp);
	}
	printf("%d ",temp);
	return 0;
}
