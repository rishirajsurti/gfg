#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
int n, k;
vi a;

int dp[40][40];

/*int solve(int idx, int cur_status, int transaction_no, int cur_share_price){
	//cur_status =1 , already bought a stock and have to sell
	if(idx == n) return 0;
	if(transaction_no > k) return 0;

//	if(dp[idx][tra])

	if(cur_status == 1){
		//two choice either sell or keep it
		return max(a[idx]-cur_share_price+solve(idx+1, 0, transaction_no+1, 0),
			solve(idx+1, 1, transaction_no, cur_share_price));
	}
	else if(cur_status == 0){
		//either buy it or leave it
		return max(solve(idx+1, 1, transaction_no, a[idx]),
			solve(idx+1, 0, transaction_no, 0));
	}
}*/

int solve(int k, int n){
	int dp[k+1][n+1];
	//transactions, day

	for(int i = 0; i <= k; i++)
		dp[i][0] = 0;
	for(int j = 0; j <= n; j++)
		dp[0][j] = 0;

	for(int i = 1; i <= k; i++){
		for(int j = 1; j <= n; j++){

			int max_so_far = INT_MIN;

			for(int m = 0; m < j; m++){
				max_so_far = max(max_so_far, a[j]-a[m]+dp[i-1][m]);
			}

			dp[i][j] = max(dp[i][j-1], max_so_far);
		}
	}
	return dp[k][n-1];
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d",&k, &n);
		a.clear();
		a.assign(n, 0);
		for(int i=0; i< n; scanf("%d",&a[i++]));
		for(int i =0;i < 40; i++)
			for(int j = 0; j < 40; j++) dp[i][j] = -1;
//		printf("%d\n",solve(0,0,0,0));
		printf("%d\n",solve(k,n));		
	}
	return 0;
}