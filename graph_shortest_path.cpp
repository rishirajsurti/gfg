#include <bits/stdc++.h>
using namespace std;
#define WHITE 0
#define BLACK 1
#define INF 1e6
typedef vector<int> vi;
vector<vi> adj;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		adj.assign(n+1, vi());

		for(int i = 1; i <= n; i++){
			if(i+1 <= n)
				adj[i].push_back(i+1);
			if(3*i <= n)
				adj[i].push_back(3*i);
		}

		vi dist;
		vi visited;
		visited.assign(n+1, WHITE);
		dist.assign(n+1, INF);
		dist[1] = 0;
		queue<int> q;
		q.push(1);
		while(!q.empty()){
			int u = q.front(); q.pop();
			for(int i = 0; i < adj[u].size(); i++){
				int v = adj[u][i];
				if(dist[u]+1 < dist[v]){
					dist[v] = dist[u]+1;
					q.push(v);
				}
			}
		}
		printf("%d\n", dist[n]);
	}
	return 0;
}