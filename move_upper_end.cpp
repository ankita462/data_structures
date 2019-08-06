#include <iostream>
#include <cstring>
using namespace std;

void  move_uppercase_end(char *str,int len) {
	char *str1=new char[20];
	int k=0;
	for(int i=0;i<len;i++) {
		if(str[i]>=65 && str[i]<=91) {
			str1[k]=str[i];
			str[i]='\0';
			k++;
		}
	}
	for(int i=0;i<len;i++) {
		if(str[i]!='\0') {
			cout<<str[i];
		}
	}
	for(int i=0;i<k;i++) {
		cout<<str1[i];
	}
}

int main(int argc ,char *argv[]) {
	char *str=argv[1];
	int len=strlen(str);
	move_uppercase_end(str,len);
	return 0;
}
