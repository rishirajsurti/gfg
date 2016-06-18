#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vector<vi> adj;
int m,n; 
int *color;


void printSol(){
	int i;
	for(i=0; i<n; i++)
		printf("%3d", color[i]);
	printf("\n" );
}

bool isSafe(int vtx, int clr){
	int i;
	for(i=0; i<n; i++){
		if(adj[vtx][i] && clr == color[i])
			return false;
	}
	return true;
}

bool gColor(int vtx){ //vertex, color
	if(vtx == n)
		return true; // bottom out;

	int c;
	for(c=1; c<=m; c++){
		if(isSafe(vtx, c)){
			color[vtx] = c;
			if(gColor(vtx+1) == true)
				return true;
			else
				color[vtx] = 0;
		}
	}
	return 0;
}

void graphColor(){
	int i,j;
	for(i=0; i<n; i++)
		color[i] = 0;

	if(gColor(0) == false){
		printf("No solution\n");
		return;
	}
	printSol();
	return;
}

int main(){
	//int n;
	scanf("%d", &n);
	adj.assign(n, vi());
	int i,j;
	for(i=0; i<n; i++){
		adj[i].assign(n,0);
		for(j=0; j<n; j++){
			scanf("%d", &adj[i][j]);
		}
	}

	scanf("%d", &m); //number of colors;
	color = new int[n];
	graphColor();
	return 0;
}