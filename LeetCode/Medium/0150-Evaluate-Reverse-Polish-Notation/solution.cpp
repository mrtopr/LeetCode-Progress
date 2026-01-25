#include<stack>
class Solution {
public:


int evaluate(int x, int y, char op){
    if(op == '+') return x+y;
    if(op == '-') return x-y;
 if(op == '*') return x*y;
    if(op == '/') return x/y;
    else return 0;
       
}
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string& z : tokens){
            if (z == "+" || z == "-" || z == "*" || z == "/") {
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                int result = evaluate(a,b,z[0]);
                s.push(result);
            }
            else s.push(stoi(z));
        }
        return s.top();
       
    }
};