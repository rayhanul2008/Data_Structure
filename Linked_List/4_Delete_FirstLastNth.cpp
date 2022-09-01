#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* next;
};
node * head = NULL;
void insert(int value){
	node * new_node = new node;
	new_node -> data = value;
	new_node -> next = NULL;

	if(head == NULL){
		head = new_node;
	}else{
		node * temp = new node;
		temp = head;
		while(temp -> next != NULL){
			temp = temp -> next;
		}
		temp -> next = new_node;
	}
}
void insertFirst(int value){
	node * new_node = new node;
	new_node -> data = value;
	new_node -> next = head;
	head = new_node;
}
void insertLast(int value){
	node * new_node = new node;
	new_node -> data = value;
	new_node -> next = NULL;
	if(head == NULL){
		head = new_node;
	}else{
		node* temp = head;
		while(temp -> next != NULL){
			temp = temp -> next;
		}
		temp -> next = new_node;
	}
}
void DeleteFirst(){
	if(head != NULL){
		node * temp = new node;
		temp = head;
		head = head -> next;
		free(temp);
	}
}
void DeleteLast(){
	if(head != NULL){
		if(head -> next == NULL){
			head = NULL;
		}else{
			node * temp = head;
			while(temp -> next -> next != NULL){
				temp = temp -> next;
			}
			node * lastNode = temp -> next;
			temp -> next = NULL;
			free(lastNode);

		}
	}
}
void DeletePositon(int index){
	if(index < 1){
		cout << "Position Should be >= 1" << endl;
	}
	else if(index == 1 &&  head != NULL){
		node * nodeDelete = head;
		head = head -> next;
		free(nodeDelete);
	}else{
		node * temp = head;
		for(int i = 1; i < index - 1; i++){
			if(temp != NULL){
				temp = temp -> next;
			}
		}
		if(temp != NULL && temp -> next != NULL){
			node * nodeDelete = temp -> next;
			temp -> next = temp -> next -> next;
			free(nodeDelete);
		}
		else cout << "The Node is already Null." << endl;
	}
}
void Display(){
	while(head != NULL){
		cout << head -> data << endl;
		head = head -> next;
	}
}

int main(){
	insert(5);
    insert(3);
    insertFirst(9);
    insertFirst(42);
    insertLast(0);
    insertLast(10);

    DeleteFirst();
    DeleteLast();
    DeletePositon(3);


    Display();
    return 0;
}