#include <bits/stdc++.h>
using namespace std;
int SIZE = 100;
int arr[100];
int top = -1;
void push(int data){
	if(top == SIZE-1){
		cout << "Stack is Overflow!" << endl;
	}else {
		top++;
		arr[top] = data;
	}
}
void pop(){
	if(top == -1){
		cout << "Stack is Underflow!" << endl;
	}else {
		cout << arr[top--] << endl;
	}
}
void isEmpty(){
	if(top == -1){
		cout << "Stack is Empty!" << endl;
	}else{
		cout << "Stack is Not Empty" << endl;
	}
}
void isFull(){
	if(top == SIZE-1){
		cout << "Stack is Full!" << endl;
	}else{
		cout << "Stack is Not Full" << endl;
	}
}
void display(){
	if(top == -1){
		cout << "Stack is Underflow!" << endl;
	}
	for(int i = top; i >= 0; i--){
		cout << arr[i] << endl;
	}
}
int main(){
	push(5);
	push(4);
	push(8);
	pop();
	isEmpty();
	isFull();
	display();
}