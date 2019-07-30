#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
	char *str,*str1;
	str=argv[1];
	str1=argv[2];
	cout<<"String1 is "<<str<<"  String2 is "<<str1<<endl;
	char *str3;
	str3=str;
	str=str1;
	str1=str3;
	cout<<"Swap String1 is "<<str<<"  Swap String2 is "<<str1;
	return 0;
}
