#include <bits/stdc++.h>
using namespace std;

int dp[55];

int main(){
	int t; scanf("%d", &t);
	while(t--){
		memset(dp, -1, sizeof dp);
		int n; scanf("%d", &n);
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;
		for(int i = 4; i <= n; i++){
			dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
		}
		printf("%d\n", dp[n]);

	}
	return 0;
}