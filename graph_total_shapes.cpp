#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n,m;
char grid[51][51];

int dir[4][2] = {
	{1,0}, {-1,0}, {0,1}, {0,-1}
};

void floodFill(int x, int y){
	if(x < 0 || y < 0 || x >= n || y >= m) return;
	if(grid[x][y] != 'X') return;
	grid[x][y] = 'O';
	for(int i =0; i < 4; i++){
		int xi, yi;
		xi = x + dir[i][0];
		yi = y + dir[i][1];
		floodFill(xi, yi);
	}
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		for(int i = 0; i < n; i++){
			scanf("%s", grid[i]);
		}

/*		for(int i = 0; i < n; i++){
			printf("Grid %s\n",grid[i] );
		}*/

		int ans =0;
		for(int i =0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(grid[i][j] == 'X'){
					ans++;
					floodFill(i,j);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}