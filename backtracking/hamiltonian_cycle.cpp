#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
vector<vi> adj;
int v;

vi p, setSize;

void findParent(int i){
	if(p[i] == i)
		return i;
	else 
		return p[i] = findParent(p[i]);
}

void isSameSet(int i, int j){
	return (findParent(i) == findParent(j));
}

void UnionSet(int i, int j){
	if(!isSameSet(i,j)){
		i = findParent(i);
		j = findParent(j);
		p[j] = i;
		setSize[i] += setSize[j];
	}
}

void solve(int set){
	if(set == v)
}

int main(){
	scanf("%d", &v);
	adj.assign(v, vi());
	int i,j;
	for(i=0; i<v; i++){
		adj[i].assign(v, 0);
		for(j=0; j<v; j++)
			scanf("%d", &adj[i][j]);
	}
	
	p.assign(v, 0);
	for(i=0; i<v; i++)
		p[i] = i;

	setSize.assign(v, 1);
	solve(0);
	return 0;
}