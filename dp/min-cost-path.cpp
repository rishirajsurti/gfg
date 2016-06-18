#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int n;
vector<vi> a;

int min(int x, int y, int z){
	return min(min(x,y), z);	
}

// from 0 0 to x, y
int minCost(int x, int y){

	vector<vi> c;
	c.assign(n, vi());
	int i,j;
	for(i=0; i<n; i++) c[i].assign(n,INT_MAX);

	c[0][0] = a[0][0];
	for(i=1; i<n; i++)
		c[i][0] = a[i][0] + c[i-1][0];

	for(j=1; j<n; j++)
		c[0][j] = a[0][j] + c[0][j-1];

	for(i=1; i<n; i++){
		for(j=1; j<n; j++){
			c[i][j] = a[i][j] + min(c[i-1][j], c[i][j-1], c[i-1][j-1]);
		}
	}

	return c[x][y];
}
/*
int minCost(int x1, int y1, int x2, int y2){
	if(x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0)
		return INT_MAX;
	if(x1 >= n || y1 >= n || x2 >= n || y2 >= n)
		return INT_MAX;

	if(x1 == x2 && y1 == y2)
		return a[x2][y2];

	return a[x1][y1] + min(minCost(x1+1, y1, x2, y2),
						   minCost(x1, y1+1, x2, y2),
						   minCost(x1+1, y1+1, x2, y2));

}*/

int main(){
	scanf("%d", &n);	
	a.assign(n, vi());
	int i,j;
	for(i=0; i<n; i++){
		a[i].assign(n,0);
		for(j=0; j<n; scanf("%d", &a[i][j++]));
	}
	printf("%d\n", minCost(2,2));
}