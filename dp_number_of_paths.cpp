#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int solve(int n, int m){
	int dp[n][m];
	memset(dp, 0, sizeof dp);
	dp[0][0] = 1;
	for(int i = 0; i < n; i++) dp[i][0] = 1;
	for(int j = 0; j < m; j++) dp[0][j] = 1;

	for(int i = 1; i < n; i++)
		for(int j = 1; j < m; j++)
			dp[i][j] = dp[i-1][j]+dp[i][j-1];

	return dp[n-1][m-1];
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, m; 
		scanf("%d %d", &n, &m);
		printf("%d\n", solve(n, m));
	}
	return 0;
}