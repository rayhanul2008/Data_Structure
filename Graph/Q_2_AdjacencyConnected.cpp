#include <bits/stdc++.h>
using namespace std;
int main(){
	cout << "Enter number of Nodes : ";
	int node;
	cin >> node;

	int adjM[node+1][node+1];
	memset(adjM, 0, sizeof(adjM));

	cout << "Enter The Edge :  " << endl;
	int edg;
	cin >> edg;
	for(int i = 0; i < edg; i++){
		int u, v;
		cin >> u >> v;
		adjM[u][v] = 1;
	}
	cout << "Print The Adjacency Matrix : " << endl;
	for(int i = 0; i < node; i++){
		for(int j = 0; j < node; j++){
			cout << adjM[i][j] << " ";
		}
		cout << endl;
	}

	int powadjM[node+1][node+1][node+1];
	for(int i = 0; i<= node; i++){
		for(int j = 0; j <= node; j++){
			powadjM[1][i][j] = adjM[i][j];
		}
	}

	for(int i = 2; i <= node; i++){
		for(int j = 1; j <= node; j++){
			for(int k = 1; k <= node; k++){
				for(int l = 1; l <= node; l++){
					powadjM[i][j][k] += powadjM[i-1][j][l]*adjM[l][k];
				}
			}
		}
	}


	int Brr[node+1][node+1];
	memset(Brr, 0, sizeof(Brr));

	for(int i = 1; i <= node; i++){
		for(int j = 1; j <= node; j++){
			for(int k = 1; k <= node; k++){
				Brr[j][k] += powadjM[i][j][k];
			}
		}
	}

	int cnt = 0;
	cout << "Path Matrix " << endl;
	for(int i = 1; i <= node; i++){
		for(int j = 1; j <= node; j++){
			cout << Brr[i][j] << " ";
			if(Brr[i][j] == 0) cnt++;
		}
		cout << endl;
	}

	if(cnt == 0) cout << "Strongly Connected!" << endl;
	else cout << "Not Strongly Connected!" << endl;

}
