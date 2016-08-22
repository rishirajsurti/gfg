#include <bits/stdc++.h>
using namespace std;

int dp[1001];
void solve(){
	memset(dp, 0, sizeof dp);
	dp[0] = 1;
	for(int i = 3; i < 1001; i++)
		dp[i] += dp[i-3];

	for(int i = 5; i < 1001; i++)
		dp[i] += dp[i-5];

	for(int i = 10; i < 1001; i++)
		dp[i] += dp[i-10];
}
int main(){
	solve();
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
	return 0;
}