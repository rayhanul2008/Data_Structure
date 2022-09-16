#include<bits/stdc++.h>
using namespace std;
#define en endl
int getPriority(char ch){
	if(ch == '+' || ch == '-') return 1;
	else if(ch == '*' || ch == '/') return 2;
	else if(ch == '^') return 3;
	else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) return 0;
	else return -1;
}
string infixToPostfix(string s){
	stack <char> stk;
	string postfix = "";
	for(int i = 0; s[i]; i++){
		char ch = s[i];
		if(ch == '(') stk.push(ch);
		else if(ch == ')'){
			while(!stk.empty() && stk.top() != '('){
				postfix += stk.top();
				postfix += ',';
				stk.pop();
			}
		}
		else{
			int priority = getPriority(ch);
			if(priority == 0){
				while(getPriority(s[i] == 0)){
					postfix += s[i];
					i++;
				}
				i--;
				postfix += ',';
			}
			else{
				if(stk.empty()) stk.push(ch);
				else{
					while(!stk.empty() && stk.top() != '('){
						postfix += stk.top();
						postfix += ',';
						stk.pop();
					}
					stk.push(ch);
				}
			}
		}

	}
	while(!stk.empty()){
		postfix += stk.top();
		postfix += ',';
		stk.pop();
	}

	return postfix;
}
int main(){
	string s = "A+(180.5*C-(D/E^F)*G)*2.0";
	string ans = infixToPostfix(s);
	cout << ans << en;
	return 0;
}