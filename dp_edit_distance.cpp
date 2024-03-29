#include <bits/stdc++.h>
using namespace std;

int solve(string a, string b, int n, int m){
	int dp[n+1][m+1];
	for(int i =0 ;i <= n; i++){
		dp[i][0] = i;
	}
	for(int j = 0; j <= m; j++){
		dp[0][j] = j;
	}

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = 1+min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]);
		}
	}
	return dp[n][m];
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, m; scanf("%d %d", &n, &m);
		string a, b;
		cin>>a;
		cin>>b;
		printf("%d\n", solve(a,b, n, m));
	}
	return 0;
}