#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

string pre_to_post(string str) {
	stack <string> s;
	int len=str.length();
	for(int i=len-1;i>=0;i--) {
		if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/') {
			string c=s.top();
			s.pop();
			string c1=s.top();
			s.pop();
			string str1=c+c1+str[i];
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
	cout<<"Prefix -- "<<str<<endl;
	cout<<"Postfix -- "<<pre_to_post(str);
	return 0;
}
