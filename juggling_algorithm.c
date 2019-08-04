#include <stdio.h>

int gcd(int a,int b) {
	int gcd=0;
	for(int i=1;i<=a,i<=b;i++) {
		if(a%i==0 && b%i==0) {
			gcd=i;
		}
	}
	return gcd;
}
void rotate(int arr[],int n,int r) {
	int gcd1=gcd(n,r);
	int temp,k,j;
	for(int i=0;i<gcd1;i++) {
		temp=arr[n-i-1];
		j=n-i-1;
		while(1) {
			k=j-r;
		if(k<0) 
			break;
		arr[j]=arr[k];
		j=k;
	}
		arr[j]=temp;
	}

}
int main(int argc,char *argv[]) {
	int arr[argc-1],k=0,i=0;
	for(i=1;i<argc-1;i++) {
		arr[k]=atoi(argv[i]);
		k++;
	}
	int r=atoi(argv[argc-1]);
	rotate(arr,k,r);
	for(i=0;i<k;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}
