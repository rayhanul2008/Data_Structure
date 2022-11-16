#include <bits/stdc++.h>
using namespace std;
double calculator(double a, double b, char arith){
	switch(arith){
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			return a / b;
		case '^':
			return pow(a, b);

	}
	return 0;

}
double postfixEvaluation(string postfix){
	stack <double> stk;

	for(int i = 0; i < postfix.size(); i++){
		char ch = postfix[i];
		if(ch == ',' || ch == ' ') continue;
		else if(ch >= '0' && ch <= '9'){
			string str = "";
			while(postfix[i] != ','){
				str += postfix[i];
				i++;
			}
			double num = stod(str);
			stk.push(num);
		}
		else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
			double value;
			cout << "Enter The Value Of " << ch << " : ";
			cin >> value;
			stk.push(value); 
		}
		else{
			double b = stk.top();
			stk.pop();
			double a = stk.top();
			stk.pop();
			stk.push(calculator(a, b, ch));
		}
	}
	return stk.top();
}
int main(){
	string postfix = "a,2,^";
	double value = postfixEvaluation(postfix);
	cout << value << endl;

	return 0;
}