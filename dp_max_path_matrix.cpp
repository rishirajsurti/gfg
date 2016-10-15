#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n;
vector<vi> a;
vector<vi> dp;

int solve(){
	for(int i = 0; i < n; i++)
		dp[n-1][i] = a[n-1][i];

	for(int i = n-2; i>=0; i--){
		dp[i][0] = a[i][0] + max(dp[i+1][0], dp[i+1][1]);
		for(int j = 0; j<n-1; j++){
			dp[i][j] = a[i][j] + max(dp[i+1][j], max(dp[i+1][j-1], dp[i+1][j+1]));
		}
		dp[i][n-1] = a[i][n-1] + max(dp[i+1][n-1], dp[i+1][n-2]);
	}
	int ans = INT_MIN;
	for(int i = 0; i < n; i++)
		ans = max(ans, dp[0][i]);
	return ans;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a.assign(n, vi());
		dp.assign(n, vi());
		for(int i = 0; i < n; i++){
			a[i].assign(n, 0);
			dp[i].assign(n, 0);
			for(int j = 0; j < n; scanf("%d", &a[i][j++]));
		}

		printf("%d\n", solve());
	}
	return 0;
}