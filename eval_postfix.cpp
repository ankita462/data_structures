#include <iostream>
#include <stack>
using namespace std;

int eval_post(string str) {
        stack <int> s;
        int len=str.length();
        for(int i=0;i<len;i++) {
                if(str[i]>='0' && str[i]<='9') {
                        s.push(str[i]-'0');
                }
                else {
                        int op1=s.top();
                        s.pop();
                        int op2=s.top();
                        s.pop();
                        int op3=0;
                        if(str[i]=='+')
                                op3=op1+op2;
                        else if(str[i]=='-')
                                op3=op2-op1;
                        else if(str[i]=='*')
                                op3=op1*op2;
                        else if(str[i]=='/')
                                op3=op2/op1;
                        s.push(op3);
                }
        }
                int s1=s.top();
                return s1;
}



int main(int argc,char* argv[]) {
        string str=argv[1];
        cout<<"Value is --> "<<eval_post(str);
        return 0;
}

