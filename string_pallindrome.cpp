#include <iostream>
#include <cstring>
using namespace std;

int main(int argc,char *argv[])
{
	char *str,temp;
	str=argv[1];
	int flag=0;
	int len=strlen(str);
	cout<<"String1 is "<<str<<endl;
	for(int i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		cout<<"String is not pallindrome ";
	}
	else
	{
		cout<<"String is pallindrome";
	}	
	return 0;
}
