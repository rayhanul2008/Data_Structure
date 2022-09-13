#include <bits/stdc++.h>
using namespace std;
#define en endl
double calculator(double a, double b, char ch){
	 switch(ch){
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return a/b;
		case '^':
			return pow(a,b);
	}
	//return 0;
}
double postfixEvaluation(string s){
	char ch;
	int i;
	double num, value;
	stack <double> stk;
	for(i = 0; i < s[i]; i++){
		//cout << s[i] << " ";
		ch = s[i];
		if(ch == ',' || ch == ' ' ) continue;
		else if(ch >= '0' && ch <= '9'){
			string str = "";
			while(s[i] != ',' && s[i]){
				str += s[i];
				i++;
			}
			num = stod(str);
			stk.push(num);
		}
		else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
			cout << "Enter The Value : " << en;
			cin >> value;
			stk.push(value);
		}
		else{
			double a, b;
			a = stk.top();
			stk.pop();
			b = stk.top();
			stk.pop();
			stk.push(calculator(a, b, ch));
		}
	}
	return stk.top();
}
int main(){
	string s = "2,3,^,4, 4, +";
	double ans = postfixEvaluation(s);
	cout << ans << en;
	return 0;
}