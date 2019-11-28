#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

string lcs(char *str,char *str1) {
	int len=strlen(str);
	int len1=strlen(str1);
	int flag=0,max=0,c=0;
	char *str2=new char [20];
	str2="hello";
	string st(str);
	string st1(str1);
	string str3,str4;
	for(int i=0;i<strlen(str);i++) {
				str3=st.substr(i,len);
				cout<<"s3 "<<str3<<endl;
		for(int j=0;j<strlen(str1);j++) {
				str4=st1.substr(j,len1);
				cout<<"s4 "<<str4<<endl;
				if(str3==str4) {
					if(max<str3.length()) {
					max=str3.length();
					c=max;
					cout<<"C "<<c<<endl;
					flag=1;
					break;
					}
				}
		}
	}
	if(flag==1 && c==max)
		return str3;
	else 
		return str2;
}

int main(int argc,char*argv[]) {
	char *str=argv[1];
	char *str1=argv[2];
	string str2=lcs(str,str1);
	cout<<str2;
	return 0;
}
