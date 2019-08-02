#include <iostream>
#include <cstring>
using namespace std;

void remove_duplicate(char *str,int len) {
	for(int i=0;i<len;i++) {
		for(int j=i+1;j<len;j++) {
			if(str[i]==str[j]) {
				str[j]='\0';
			}
		}
	}
	for(int i=0;i<len;i++) {
		if(str[i]!='\0') {
			cout<<str[i];
		}
	}
}

int main(int argc,char *argv[]) {
	char *str;
	str=argv[1];
	int len=strlen(str);
	remove_duplicate(str,len);
	return 0;
}
