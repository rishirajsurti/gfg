#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
vector< vi > adj;

bool isAdj(string a, string b){
	int count = 0;
	for(int i = 0; i < a.length(); i++){
		if(a[i] != b[i]) count++;
		if(count > 1) return false;
	}
	return count==1;	
}


int main(){
	int n; scanf("%d", &n);
	vector<string> a(n);
	for(int i = 0; i< n; i++)
		cin>> a[i];

	adj.assign(n, vi());
	for(int i = 0; i < n; i++){

		for(int j = i+1; j < n; j++){
			//if(i==j) continue;
			if(isAdj(a[i], a[j])){
				adj[i].push_back(j);
				adj[j].push_back(i);
			}
		}
	}

	string start, end;
	cin>> start;
	cin >> end;

	int s, d;
	for(int i = 0; i < n; i++){
		if(a[i] == start) s = i;
		else if(a[i] == end) d = i;
	}
	vi dist(n, INT_MAX);
	dist[s] = 0;
	queue<int> q;
	q.push(s);
	printf("printing a\n");
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
	cout << start << " start end " << end << endl;
	printf("%d %d\n", s, d);
	while(!q.empty()){
	//printf("here\n");

		int u = q.front(); q.pop();
		printf("%d ", u);
		for(int j = 0; j < adj[u].size(); j++){
			int v = adj[u][j];
			if(dist[v] == INT_MAX){
				dist[v] = dist[u]+1;
				q.push(v);
			}
		}
	}
	cout << dist[d] << endl;
	return 0;

}