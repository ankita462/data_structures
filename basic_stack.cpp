#include <iostream>
#include <cstring>
#define cap 1000
using namespace std;

class myStack {
	public:
	int top;
	char arr[cap];
	myStack() {
		top==-1;
	}
	bool push(char ele) {
		if(top>=(cap-1))
			return false;
		arr[++top]=ele;
		return true;
	}
	char pop() {
		if(top==-1)
			return '$';
		char pop_ele=arr[top];
		top=top-1;
		return pop_ele;
	}
	char top1() {
		if(top==-1)
			return '$';
		return arr[top];
	}
	bool isEmpty() {
		if(top==-1)
			return true;
			return false;
	}
};

int main(int argc,char* argv[]) {
	class myStack s;
	char *str=argv[1];
	for(int i=0;i<strlen(str);i++) {
		s.push(str[i]);
	}
	while(!s.isEmpty()) {
		cout<<s.top1()<<" ";
		s.pop();
	}
	return 0;
}
