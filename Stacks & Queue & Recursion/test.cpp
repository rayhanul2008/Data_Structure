#include <bits/stdc++.h>
using namespace std;
int arr[10];
int top = -1;
void push(int data){
	if(top == -1){
		top++;
		arr[top] = data;
	}else {
		top++;
		arr[top] = data;
	}
}
void display(){
	for(int i = 0; i < 10; i++){
		cout << arr[i] << endl;
	}
}
int main(){
	push(5);
	push(4);
	push(8);
	display();
}