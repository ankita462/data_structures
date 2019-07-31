#include <iostream>
#include <set>
#include <cstring>
using namespace std;

void print_lex_circ(string str,int len,int x)
{
	set<string> lex_circ_string;
	str=str+str;
	for(int i=0;i<len;i++)
	{
		lex_circ_string.insert(str.substr(i,x));
	}
	while(!lex_circ_string.empty())
	{
		cout<<*lex_circ_string.begin()<<"  ";
		lex_circ_string.erase(lex_circ_string.begin());
	}
}
int main(int argc,char *argv[])
{
	char *str1;
	str1=argv[1];
	int x=atoi(argv[2]);
	string str=str1;
	int len=strlen(str1);
	print_lex_circ(str,len,x);
	return 0;
}
