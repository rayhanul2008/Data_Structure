#include <bits/stdc++.h>
using namespace std;
int main(){
	int ver, edg;
	cin >> ver >> edg;

	int adjM[ver][ver];
	for(int i = 0; i < ver; i++){
		for(int j = 0; j < ver; j++){
			adjM[i][j] = 0;
		}
	}

	cout << "Enter The Edge :  " << endl;
	for(int i = 0; i < edg; i++){
		int u, v;
		cin >> u >> v;
		if(u > ver || v >> ver){
			cout << "Invalid edge!";
			i--;
		}
		else{
			adjM[u][v] = 1;
			adjM[v][u] = 1;
		}
	}
	cout << "Print The Adjacency Matrix : " << endl;
	for(int i = 0; i < ver; i++){
		for(int j = 0; j < ver; j++){
			cout << adjM[i][j] << " ";
		}
		cout << endl;
	}
}