#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *head;

void insert(int value){
    struct node *new_node = (node *)malloc(sizeof(struct node));
    new_node -> data = value;
    new_node -> next = NULL;
    if(head == NULL){
        head = new_node;
    }else{
        node * temp = head;
        while (temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = new_node;
    }
}
void sortLinkedList(){
	node * curr = head;
	node * temp = NULL;
	int k;
	if(head == NULL){
		return;
	}else{
		while(curr != NULL){
			temp = curr -> next;
			while(temp != NULL){
				if(curr -> data > temp -> data){
					k = curr -> data;
					curr -> data = temp -> data; 		// swap(curr-> data, temp-> data);
					temp -> data = k;
				}
				temp = temp -> next;
			}
			curr = curr -> next;
		}
	}
}
void reverseList(){
	if(head != NULL){
		node * prevNode = head;
		node * tempNode = head;
		node * currNode = head -> next;

		prevNode -> next = NULL;

		while(currNode != NULL){
			tempNode = currNode -> next;
			currNode -> next = prevNode;
			prevNode = currNode;
			currNode = tempNode;
		}
		head = prevNode;
	}
}
void Display(){
	node *temp = head;
    while (temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> next;
    }
    
}
int main(){
    insert(5);
    insert(3);
    insert(9);
    insert(42);
    insert(0);
    insert(10);

    cout << "Display insert The Node : " << endl;
    Display();
    cout << "Display Sorted The Node : " << endl;
    sortLinkedList();
    Display();
    cout << "Display reverseList The Node : " << endl;
    reverseList();
    Display();

    return 0;
}
