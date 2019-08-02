#include <iostream>
#include <cstring>
using namespace std;

void remove_from_one_present_second(char *str,char *str1,int len) {
	for(int i=0;i<len;i++) {
		for(int j=0;j<strlen(str1);j++) {
			if(str[i]==str1[j]) {
				str[i]='\0';
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
	char *str,*str1;
	str=argv[1];
	str1=argv[2];
	int len=strlen(str);
	remove_from_one_present_second(str,str1,len);
	return 0;
}
