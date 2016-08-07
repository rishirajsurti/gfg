#include <bits/stdc++.h>
using namespace std;
#define N 5

char grid[N][N];
int dp[N][N];
int r,c; 
	
int d[8][2] = {
	{0,1}, {1, 0}, {1, 1}, {-1, 1}, 
	{1, -1}, {0, -1}, {-1, 0}, {-1, -1}
};

bool isValid(int i, int j){
	return (i>=0 && j>=0 && i<r && j<c);
}

bool isAdjacent(char prev, char curr){
	return ((curr-prev) == 1);
}

int getLenUtil(int i, int j, char prev){
	if(!isValid(i,j) || !isAdjacent(prev, grid[i][j]))
		return 0;

	if(dp[i][j] != -1) return dp[i][j];

	int ans = 0;
	for(int k = 0; k < 8; k++)
		ans = max(ans, 1+getLenUtil(i+d[k][0], j+d[k][1], grid[i][j]));

	return dp[i][j]=ans;
}

int getLen(char s){
	memset(dp, -1, sizeof dp);
	int ans = 0;

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(grid[i][j] == s){
				for(int k = 0; k < 8; k++){
					ans = max(ans, 1 + getLenUtil(i+d[k][0], j+d[k][1], s));
				}
			}
		}
	}
	return ans;
}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d", &r, &c);
		for(int i = 0; i < r; i++){
			for(int j = 0 ; j < c; j++)
				scanf("%c", &grid[r][c]);
		}

		printf("%d\n", getLen('a'));

	}
}