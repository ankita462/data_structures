#include <iostream>
#include <cstring>
using namespace std;

char max_characters(char *str,int len) {
	int c=0,j=0,num=0;
	char c1;
	int arr[256]={0};
	for(int i=0;i<len;i++) {
		num=arr[str[i]]++;
			if(c<arr[str[i]]) {
				c=arr[str[i]];
                        	c1=str[i];
			}
	}
	cout<<"no of times "<<c<<": ";
	return c1;
}
int main(int argc,char *argv[]) {
	char *str;
	str=argv[1];
	int len=strlen(str);
	char character=max_characters(str,len);
	cout<<character;
	return 0;
}
