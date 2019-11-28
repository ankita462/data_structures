#include <iostream>
#include <stack>
using namespace std;

stack <int> sort(stack <int> s) {
	stack <int> temp;
	while(!s.empty()) {
		int temp1=s.top();
		s.pop();
			while(!temp.empty() &&  temp.top()<temp1) {
				s.push(temp.top());
				temp.pop();
			}
			temp.push(temp1);
	}
	return temp;
}

int main(int argc,char* argv[]) {
	int n=atoi(argv[1]);
	stack <int> s;
	for(int i=2;i<argc;i++) 
		s.push(atoi(argv[i]));
	 stack <int> s1=sort(s);
	while(!s1.empty()) {
		cout<<s1.top()<<" ";
		s1.pop();
	}
	return 0;
}
