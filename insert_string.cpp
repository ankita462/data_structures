#include <iostream>
#include <cstring>
using namespace std;

int main(int argc,char *argv[])
{
	char *str[70];
	int k=0;
	for(int i=1;i<argc-1;i++)
	{
		str[k]=argv[i];
		k++;
	}
	cout<<"size"<<k<<endl;
	int index=atoi(argv[argc-1]);
	for(int i=0;i<k;i++)
	{
		cout<<str[i]<<" ";
	}

	return 0;
}
