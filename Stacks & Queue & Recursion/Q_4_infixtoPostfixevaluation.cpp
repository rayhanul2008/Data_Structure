#include <bits/stdc++.h>
using namespace std;
int getpriority(char ch){
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || (ch == '.')){
		return 0;
	}
	else if(ch == '^') return 3;
	else if(ch == '*' || ch == '/') return 2;
	else if(ch == '+' || ch == '-') return 1;
	return -1;
}
string infixtopostfix(string infix){
	stack <char> stk;
	string postfix = "";

	for(int i = 0; i < infix.size(); i++){
		if(getpriority(infix[i]) == 0){
			while(getpriority(infix[i]) == 0){
				postfix += infix[i];
				i++;
			}
			i--;
			postfix += ',';
		}
		else if(infix[i] == '(') stk.push(infix[i]);
		else if(infix[i] == ')'){
			while(!stk.empty() && stk.top() != '('){
				postfix += stk.top();
				postfix += ',';
				stk.pop();
			}
			stk.pop();
		}
		else{
			int priority = getpriority(infix[i]);
			while(!stk.empty() && stk.top() != '(' && priority <= getpriority(stk.top())){
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
	postfix.erase(postfix.end() - 1);
	cout << "Infix To Postfix : " << endl;
	cout << postfix << endl;
	return postfix;

}
int main(){
	string infix = "A+(180.5*C-(D/E^F)*G)*2.0";
	string postfix = infixtopostfix(infix);
	return 0;
}