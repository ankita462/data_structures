#include <iostream>
#include <cstring>
using namespace std;

int check_rotation(char *str,char *str1) {
	int c=0,len=strlen(str);
	char temp;
	if(strlen(str1)!=strlen(str))
		return 0;
	else {
		int flag=0;
		for(int i=0;i<len;i++) {		
				temp=str[len-1];
				for(int i=len-1;i>0;i--) {
					str[i]=str[i-1];
				}
				str[0]=temp;
	if(strcmp(str,str1)==0) {
		flag=1;
		break;
	}
	}
		return flag;
}
}

int main(int argc,char *argv[]) {
	char *str=argv[1];
	char *str1=argv[2];
	int i=check_rotation(str,str1);
	if(i==0)
		cout<<"Strings are not rotation of each other";
	else if(i==1)
		cout<<"Strings are rotation of each other";
	return 0;
}
