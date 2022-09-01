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
void Display(){
    while (head != NULL){
        cout << head -> data << endl;
        head = head -> next;
    }
    
}
int main(){
    insert(5);
    insert(3);
    insert(9);
    insert(42);
    insert(0);
    insert(10);

    Display();

    return 0;
}