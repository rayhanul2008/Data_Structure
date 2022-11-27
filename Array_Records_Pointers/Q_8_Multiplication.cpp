#include <bits/stdc++.h>
using namespace std;

int main(){
	int row, col, r1, c1;
	cin >> row >> col >> r1 >> c1;

	if(col == r1){
		int one[row][col];
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				cin >> one[i][j];
			}
		}
		int two[r1][c1];
		for(int i = 0; i < r1; i++){
			for(int j = 0; j < c1; j++){
				cin >> two[i][j];
			}
		}

		int result[row][c1];
		memset(result, 0, sizeof(result));
		for(int i = 0; i < row; i++){
			for(int j = 0; j < c1; j++){
				for(int k = 0; k < r1; k++){
					result[i][j] += (one[i][k] * two[k][j]);
				}
			}
		}

		cout << "Printf Matrix in Multiplication : ";
		for(int i = 0; i < row; i++){
			for(int j = 0; j < c1; j++){
				cout << result[i][j] << " ";
			}
			cout << endl;
		}

	}
	else cout << "Invalid input ." << endl;
	
}