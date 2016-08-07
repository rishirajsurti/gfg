#include <bits/stdc++.h>
using namespace std;
#define MAX 101
typedef vector<int> vi;
int n, W;
int val[MAX], wt[MAX];
int dp[MAX][MAX];
int solve(int item_num, int rem_wt){

	if(item_num == n || rem_wt == 0) return 0;
	

	if(dp[item_num][rem_wt] != -1) return dp[item_num][rem_wt];

	if(wt[item_num] > rem_wt) return dp[item_num][rem_wt] = solve(item_num+1, rem_wt);

	return dp[item_num][rem_wt]= max(val[item_num]+solve(item_num+1, rem_wt-wt[item_num]),
		solve(item_num+1, rem_wt));
}

int main(){
	int t; scanf("%d",&t);
	while(t--){
		memset(dp, -1, sizeof dp);
		scanf("%d %d", &n, &W);

		for(int i = 0; i < n; scanf("%d", &val[i++]));
		for(int i = 0; i < n; scanf("%d", &wt[i++]));
		printf("%d\n", solve(0, W));
	}
	return 0;
}