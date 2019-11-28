#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

string prefix_to_infix(string str) {
	stack <string> s;
	int len=str.length();
	for(int i=len-1;i>=0;i--) {
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z') 
			s.push(string(1,str[i]));
		if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/') {
			string c=s.top();
			s.pop();
			string c1=s.top();
			s.pop();
			string str1="("+c+str[i]+c1+")";
			s.push(str1);
		}
	}
		string str2=s.top();
		return str2;
}

int main(int argc,char* argv[]) {
	string str=argv[1];
	cout<<"Prefix -- "<<str<<endl;
	cout<<"Infix -- "<<prefix_to_infix(str);
	return 0;
}

