#include <bits/stdc++.h>
using namespace std;
int mat[10][10], p[10][10], n;
int is_strong(){
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(p[i][j] == 0) return 0;
        }
    }
    return 1;
}
void display(){
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}
void warshall(){
	for(int k = 0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                p[i][j] = p[i][j] || (p[i][k] && p[k][j]);
            }
        }
    }
}
void copy(){
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            p[i][j] = mat[i][j];
        }
    }
}
void input(){
	cin >> n;
	for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
}
int main(){
	input();
	copy();
	warshall();
	display();
	if(is_strong()){
		cout << "The graph is Strongly connected!" << endl;
	}
	else cout <<  "The graph is not Strongly connected!" << endl;
}