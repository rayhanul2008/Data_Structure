#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
	
};
struct node * head = NULL;

void insertFirst(int value){
	node *new_node = (node *) malloc(sizeof(node));
	new_node -> data = value;
	new_node -> next = head;
	head = new_node;
}
void insertLast(int value){
	node *new_node = (node *) malloc(sizeof(node));
	new_node -> data = value;
	new_node -> next = NULL;
	if(head == NULL){
		head = new_node;
	}else{
		node * temp = head;
		while(temp -> next != NULL){
			temp = temp -> next;
		}
		temp -> next = new_node;
	}
}
void insertNthPosition(int value, int ind){
	node * new_node = new node();
	new_node -> data = value;
	new_node -> next = NULL;

	if(ind < 1){
		cout << "ind Position should be >= 1" << endl;
	}
	else if(ind == 1){
		new_node -> next = head;
		head = new_node;
	}else{
		node * temp = head;

		for(int i = 1; i < ind-1; i++){
			if(temp != NULL){
				temp = temp -> next;
			}
		}
		if(temp != NULL){
			new_node -> next = temp -> next;
			temp -> next = new_node;
		}else{
			cout << "n The previous node is null." << endl;
		}
	}
}

void Display(){
	node * temp = head;
	while(temp != NULL){
		cout << temp -> data << endl;
		temp = temp -> next;
	}

}
int main(){
	insertFirst(5);
    insertFirst(3);
    insertFirst(9);
    insertLast(42);
    insertLast(0);
    insertNthPosition(10, 1);
    insertNthPosition(54, 5);

    Display();

    return 0;
}