#include <bits/stdc++.h>
using namespace std;
int factorial(int value){
	if(value <= 1) return 1;
	return value * factorial(value - 1);
}
int main(){
	int n;
	cin >> n;
	int value = factorial(n);
	cout << value << endl;

	return 0;
}