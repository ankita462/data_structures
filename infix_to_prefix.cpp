#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

int prec(char c) {
	if(c=='+' || c=='-')
		return 1;
	if(c=='*' || c=='/')
		return 2;
	if(c=='^')
		return 3;
	return -1;
}

string in_to_pre(string str) {
	stack <char> s;
	string str2;
	s.push('n');
	int len=str.length();
	for(int i=len-1;i>=0;i--) {
		if(str[i]==')') 
			s.push(str[i]);
		else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z') 
			str2=str2+str[i];
		else if(str[i]=='(') {
			while(s.top()!='n' && s.top()!=')') {
				char s1=s.top();
				s.pop();
				str2+=s1;
			}
			if(s.top()==')') 
				s.pop();
		}
		else {
			while(s.top()!='n' && prec(str[i])<=prec(s.top())) {
				char s1=s.top();
				s.pop();
				str2+=s1;
			}
			s.push(str[i]);
		}
	}
	while(s.top()!='n') {
		char s1=s.top();
		s.pop();
		str2+=s1;
	}
	int len1=str2.length();
	char s2;
	//cout<<"s  "<<str2<<" s "<<endl;
	for(int i=0;i<len1/2;i++) {
		s2=str2[i];
		str2[i]=str2[len1-i-1];
		str2[len1-i-1]=s2;
	}
	return str2;
}

int main(int argc,char* argv[]) {
	string str=argv[1];
	cout<<"Infix -- "<<str<<endl;
	cout<<"Prefix -- "<<in_to_pre(str);
	return 0;
}
