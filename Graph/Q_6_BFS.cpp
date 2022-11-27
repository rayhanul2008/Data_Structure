#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, m;
   cin >> n >> m;
   vector < vector <int>> v(n);
   for(int i = 0; i < m; i++){
       int a, b; cin >> a >> b;
       a--, b--;
       v[a].push_back(b);
   }
   queue <int> q;
   vector <int> dis(n);
   vector <bool> visit(n, false);
 
   int st = 0;
   q.push(st);
   dis[st] = 0;
   while(!q.empty()){
       int nd = q.front();
       q.pop();
       for(int x : v[nd]){
           if(visit[x]) continue;
           visit[x] = true;
           dis[x] = dis[nd] + 1;
           q.push(x);
       }
   }
   for(int x : dis) cout << x << " "; cout << endl;
}
