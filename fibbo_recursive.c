#include <stdio.h>

void fibbo(int size,int n,int n1) {
	int n2;
	if(size>0) {
		n2=n+n1;
		printf("%d ",n2);
		n=n1;
		n1=n2;
		fibbo(size-1,n,n1);
	}
}
int main(int argc,char *argv[]) {
	int n=atoi(argv[1]);
	int a=0;
	int b=1;
	printf("%d %d ",a,b);
	fibbo(n-2,a,b);
	return 0;
}
