#include <bits/stdc++.h>
using namespace std;
#define INF 1e6
typedef vector<int> vi;
typedef pair<int, int> ii;
int adj[23][23];

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				scanf("%d", &adj[i][j]);
		}

		int u,v,k;
		scanf("%d %d %d", &u, &v, &k);
		int cnt = 0;
		vi dist(n, INF), visited(n, 0);
		queue<int> q;
		q.push(u);
		dist[u] = 0;
		visited[u] = 1;
		while(!q.empty()){
			int w = q.front(); q.pop();
			for(int i = 0; i < n && i!=w; i++){
				
				if(adj[w][i] && dist[w]+1 < dist[i]){
					q.push(i);
					dist[i] = dist[w]+1;
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}