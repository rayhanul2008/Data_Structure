#include <bits/stdc++.h>
using namespace std;
int main(){
	cout << "Enter number of Nodes : ";
	int node;
	cin >> node;

	int adjM[node+1][node+1];
	memset(adjM, 0, sizeof(adjM));

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



	]

}