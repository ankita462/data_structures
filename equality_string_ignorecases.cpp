#include <iostream>
#include <cstring>
using namespace std;

int check_equality(char *str,char *str1) {
	int c=0;
	if(strlen(str1)!=strlen(str)) 
		return 0;
	else {
	for(int i=0;i<strlen(str);i++) {
			if(str[i]==str1[i] || str[i]+32==str1[i]+32 || str[i]+32==str1[i] || str[i]==str1[i]+32)
				c++;
		}
	}
	if(c==strlen(str)) 
		return 1;
	else
		return 0;
}	

int main(int argc,char *argv[]) {
	char *str=argv[1];
	char *str1=argv[2];
	int i=check_equality(str,str1);
	if(i==0)
		cout<<"Strings are not equal";
	else if(i==1)
		cout<<"Strings are equal";
	return 0;
}
