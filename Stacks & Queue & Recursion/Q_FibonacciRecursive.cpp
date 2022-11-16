#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
	if(n == 0 || n == 1) return n;
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	int n;
	cin >> n;
	cout << "fibonacci Sequence in " << n << "tm : ";
	for(int i = 0; i < n; i++){
		cout << fibonacci(i) << " ";
	}
	cout << endl;

	cout << n << "th fibonacci number : " << fibonacci(n) << endl;

	return 0;
}