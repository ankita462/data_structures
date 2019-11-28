#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

string post_to_pre(string str) {
	stack <string> s;
	int len=str.length();
	for(int i=0;i<len;i++) {
		if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/') {
			string c=s.top();
			s.pop();
			string c1=s.top();
			s.pop();
			string str1=str[i]+c1+c;
			s.push(str1);
		}
		else
			s.push(string(1,str[i]));
	}
	string str2=s.top();
	return str2;
}

int main(int argc,char* argv[]) {
	string str=argv[1];
	cout<<"Postfix -- "<<str<<endl;
	cout<<"Prefix -- "<<post_to_pre(str);
	return 0;
}