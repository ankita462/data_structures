#include <stdio.h>
#include <stdlib.h>

int random_generate(int lower,int upper) {
	int num=(rand()%(upper-lower+1))+lower;
		return num;
}

int main(int argc,char* argv[]) {
	int arr[13]={1002,1008,1111,1144,1156,1236,1415,1440,1552,1729,1803,1829,1834,1849,1850,1874,1880};
	srand(time(0));
	int a=random_generate(0,16);
	printf("%d",arr[a]);
	return 0;
}
