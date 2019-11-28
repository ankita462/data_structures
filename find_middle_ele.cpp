#include <iostream>
#include <stack>
using namespace std;

void find_mid_ele(stack <int> s,int n) {
	int count=0;
	while(count<n/2) {
		s.pop();
		count++;
	}
	cout<<s.top();
}

int main(int argc,char* argv[]) {
	int n=atoi(argv[1]);
	stack <int> s;
	for(int i=2;i<argc;i++) {
		s.push(atoi(argv[i]));
	}
	find_mid_ele(s,n);
	return 0;
}
