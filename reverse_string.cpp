#include <iostream>
#include <cstring>
using namespace std;

int main(int argc,char *argv[]) {
	char *str;
	str=argv[1];
	int len=strlen(str);
	for(int i=len;i>=0;i--)
	{
		cout<<str[i];
	}
	return 0;
}

