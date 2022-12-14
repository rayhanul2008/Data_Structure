#include <bits/stdc++.h>
using namespace std;
int getPriority(char arith){
	if(arith == '+' || arith == '-'){
		return 1;
	}
	else if(arith == '*' || arith == '/'){
		return 2;
	}
	else if(arith == '^'){
		return 3;
	}
	else if((arith >= 'a' && arith <= 'z') || (arith >= 'A' && arith <= 'Z') || (arith >= '0' && arith <= '9') || (arith == '.')){
		return 0;
	}
	return -1;
}
string infixtopostfix(string infix){
	stack <char> stk;
	string postfix = "";
	int point = -1;
	for(int i = 0; i < infix.size(); i++){
		if(getPriority(infix[i]) == 0){
			while(getPriority(infix[i]) == 0){
				postfix += infix[i];
				i++;
			}
			i--;
			postfix += ',';
		}
		else if(infix[i] == '('){
			stk.push(infix[i]);
		}
		else if(infix[i] == ')'){
			while(!stk.empty() && stk.top() != '('){
				postfix += stk.top();
				postfix += ',';
				stk.pop();
			}
			stk.pop();
		}
		else{
			int priority = getPriority(infix[i]);
			while(!stk.empty() && stk.top() != '(' && priority <= getPriority(stk.top())){
				postfix += stk.top();
				postfix += ',';
				stk.pop();
			}
			stk.push(infix[i]);

		}
	}
	while(!stk.empty()){
		postfix += stk.top();
		postfix += ',';
		stk.pop();
	}
	cout << postfix << endl;
	return postfix;
}
int main(){
	string infix = "A+(180.5*C-(D/E^F)*G)*2.0";
	string postfix = infixtopostfix(infix);
	cout << postfix << endl;

	return 0;
}