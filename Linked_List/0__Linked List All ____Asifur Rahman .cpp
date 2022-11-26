#include<bits/stdc++.h>
using namespace std;

struct node{
    int val = 0;
    node* nxt = NULL;
    node(int num=0){val = num;};
};

struct linkedList{
    node* head;
    int len = 0;
    linkedList(){
        head = new node();
    }
    void insert(int val){
        len++;
        node* cur = head;
        while(cur->nxt != NULL){
            cur = cur->nxt;
        }
        cur->nxt = new node(val);
    }
    void print(){
        node* cur = head->nxt;
        while(cur != NULL){
            cout << cur->val << " ";
            cur = cur->nxt;
        }
        cout << endl;
    }
    void sort(){
        for(int i = 0; i < len; i++){
            node* one = head->nxt;
            node* two = one->nxt;
            while(two != NULL){
                if(one->val > two->val){
                    swap(one->val, two->val);
                }
                one = one->nxt;
                two = two->nxt;
            }
        }
    }
    void remove(int val){
        node* one = head;
        node* two = one->nxt;
        while(two != NULL){
            if(two->val == val){
                one->nxt = two->nxt;
                return;
            }
            one = one->nxt;
            two = two->nxt;
        }
    }
    int search(int val){
        node *cur = head->nxt;
        int idx = 0;
        while(cur != NULL){
            if(cur->val == val) return idx;
            cur = cur->nxt;
            idx++;
        }
        return idx;
    }
};

int main(){
    linkedList ami;
    ami.insert(1);
    ami.insert(300);
    ami.insert(104);
    ami.insert(34);
    ami.insert(54);
    ami.insert(4);
    ami.print();
    ami.remove(34);
    ami.print();
    ami.insert(40);
    ami.sort();
    ami.print();
    cout << 54 <<" is in index " << ami.search(54) << endl;
}