#include <bits/stdc++.h>
using namespace std;
#define Q_1_BinarySearchTree Node
struct Q_1_BinarySearchTree{
	int data;
	Node *left;
	Node *right;
	Node(int n){
		data = n;
		left = NULL;
		right = NULL;
	}
};
void insert(Node *node, int n){
	if(n < node-> data){
		if(node-> left == NULL){
			node -> left = new Node(n);
		}
		else insert(node -> left, n);
	}
	else if(n > node->data){
		if(node->right == NULL){
			node -> right = new Node(n);
		}
		else insert(node->right, n);
	}
	return;
}
void inorder(Node *root){
	if(root == NULL) return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root-> right);
}
void postorder(Node *root){
	if(root == NULL) return;
	postorder(root->left);
	postorder(root-> right);
	cout << root->data << " ";
}
void preorder(Node *root){
	if(root == NULL) return;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root-> right);
}
int main(){
	int n, x;
	cin >> n;
	Node *root = NULL;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(root == NULL){
			root = new Node(x);
		}
		else insert(root, x);
	}
	cout << "inorder Traverse : " << endl;
	inorder(root);
	cout << "Postorder Traverse : " << endl;
	postorder(root);
	cout << "Preorder Traverse : " << endl;
	preorder(root);

}