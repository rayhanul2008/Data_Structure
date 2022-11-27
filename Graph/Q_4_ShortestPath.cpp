#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000
int main(){
	cout << "Enter Numver of Vertex : " << endl;
	int v;
	cin >> v;
	int mat[v][v];
	int shortMat[v][v];
	for(int i = 0; i < v; i++){
		for(int j = 0; j < v; j++){
			cin >> mat[i][j];
			if(mat[i][j] == 0) shortMat[i][j] = MAX;
			else shortMat[i][j] = mat[i][j];
		}
	}

	// calculate shortest path matrix
	for(int k = 0; k < v; k++){
		for(int i = 0; i < v; i++){
			for(int j = 0; j < v; j++){
				cout << shortMat[i][j] << " ";
			}
			cout << endl;
		}
		for(int i = 0; i < v; i++){
			for(int j = 0; j < v; j++){
				shortMat[i][j] = min(shortMat[i][j], (shortMat[i][k] + shortMat[k][j]));
			}
		}
	}
	cout << "Shortest path Matrix : " << endl;
	for(int i = 0; i < v; i++){
		for(int j = 0; j < v; j++){
			cout << shortMat[i][j] << " ";
		}
		cout << endl;
	}
}