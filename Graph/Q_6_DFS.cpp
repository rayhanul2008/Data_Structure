#include <bits/stdc++.h>
using namespace std;
#define N 10000
vector <int> v[N];
bool vis[N];
vector <int> ans;
void dfs(int node){
	if(vis[node] == 1) return;
	ans.push_back(node);
	vis[node] = 1;
	for(auto u : v[node]){
		dfs(u);
	}
	return;
}
int main(){
	int n, m; // n = node count, m = edge count
   	cin >> n >> m;
   	memset(vis, 0, sizeof(vis));
    for(int i = 1; i <= m; i++){
    	int x, y;
    	cin >> x >> y;
    	v[x].push_back(y);
    	v[y].push_back(x);
    }
    int a;
    cin >> a;
    dfs(a);
    for(auto u : ans){
    	cout << u << endl;
    }
}