#include <iostream>
#include <stack>
using namespace std;

void del_mid_ele(stack <int> s,int n,int curr) {
	while(s.empty() || curr==n)
		return ;
	int x=s.top();
	s.pop();
	del_mid_ele(s,n,curr+1);
	if(curr!=n/2)
	cout<<x<<" ";
}

int main(int argc,char* argv[]) {
	int n=atoi(argv[1]);
	stack <int> s;
	for(int i=2;i<argc;i++) 
		s.push(atoi(argv[i]));
	del_mid_ele(s,n,0);
	return 0;
}
