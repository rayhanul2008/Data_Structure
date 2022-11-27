#include <bits/stdc++.h>
using namespace std;

int main(){
	int row, col, size = 0;
	cin >> row >> col;

	int twoD[row][col];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin >> twoD[i][j];
		}
	}

	int oneD[row*col];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			oneD[size++] = twoD[i][j]; 
		}
	}

	cout << "Printf 1D array : " << endl;
	for(int i = 0; i < size; i++){
		cout << oneD[i] << endl;
	}
	
}