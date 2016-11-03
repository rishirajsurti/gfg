#include <bits/stdc++.h>
using namespace std;
#define MAXN 1001
#define MOD 1000000007
typedef vector<int> vi;
int n, m, k;
int grid[MAXN][MAXN], vis[MAXN][MAXN];
int ANS;

bool ok(int i, int j){
	if( i < 1 || j < 1 || i > n || j > m || grid[i][j] == -1) return false;
	return true;
}

int solve(){
	/*if(!ok(x,y)) return;
	if(x == n && y == m){
		ANS++; ANS %= MOD;
		return;
	}
	solve(x+1, y);
	solve(x, y+1);*/
	int dp[MAXN][MAXN];
	memset(dp, 0, sizeof dp);
	dp[1][1] = 1;
	for(int i = 1; i <= n ; i++){
		for(int j = 1; j <= n; j++){

			if(grid[i][j] == -1) continue;
			if(i == 1 && j == 1) dp[i][j] = 1;
			else if(i == 1){
				dp[i][j] = (dp[i][j-1] > 0);
			}
			else if(j == 1)
				dp[i][j] = (dp[i-1][j] > 0);

			else{
				if(dp[i-1][j] > 0) dp[i][j] += dp[i-1][j];
				if(dp[i][j-1] > 0) dp[i][j] += dp[i][j-1];
			}
/*			else if(i > 1 && j > 1)
				dp[i][j] += dp[i-1][j] + dp[i][j-1];
			else if(i > 1)
				dp[i][j] += dp[i-1][j];
			else if(j > 1)
				dp[i][j] += dp[i][j-1];
*/
			dp[i][j] %= MOD;
		}
	}
	return dp[n][m]%MOD	;
}

int main(){

	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d %d",&n, &m, &k);
		memset(grid, 0, sizeof grid);
		for(int i = 0; i < k; i++){
			int r,c; scanf("%d %d", &r, &c);
			grid[r][c] = -1;
		}
		//solve(1, 1);
		printf("%d\n", solve());
	}
	return 0;
}