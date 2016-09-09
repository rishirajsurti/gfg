#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vector<vi> adj;
vi visited;

void dfs(int u){
	visited[u] = 1;
	if(adj[u].empty()) return;
	int v = adj[u][0];
	if(!visited[v]) dfs(v);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		adj.assign(n, vi());
		int x,y;
		for(int i = 0; i < n-1; i++){
			scanf("%d %d", &x, &y);
			--x; --y;
			adj[x].push_back(y);
		}
		int q; scanf("%d", &q);
		for(int i =0 ; i< q; i++){
			scanf("%d %d", &x, &y);
			visited.assign(n, 0);
			--x; --y;
			dfs(x);
			int count1=0, count2=0;
			for(int j = 0; j < visited.size(); j++){
				if(visited[j]) count1++;
			}

			visited.assign(n, 0);
			dfs(y);
			for(int j = 0; j < visited.size(); j++){
				if(visited[j]) count2++;
			}

			if(count1 > count2){
				printf("%d %d\n", count1, count2);
				printf("%d\n", x+1);
			}
			else if(count2 > count1){
				printf("%d %d\n", count1, count2);
				printf("%d\n", y+1);
			}
			else{
				printf("%d %d\n", count1, count2);
				printf("-1\n");		
			}
		}
	}
	return 0;	
}