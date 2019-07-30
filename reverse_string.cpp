#include <iostream>
#include <cstring>
using namespace std;
char* reverse_string(char *str,int len);

int main(int argc,char *argv[]) {
	char *str;
	str=argv[1];
	int len=strlen(str);
	char *str1=reverse_string(str,len);
	cout<<str1;
	return 0;
}
char* reverse_string(char *str,int len)
{
	char temp;
	for(int i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-i-1];
		str[len-1-i]=temp;
	}
	return str;
}

