#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int n,m;
vector<vi> a, dp;

int solve(){
	for(int i = 0;i < n; i++) dp[i][0] = a[i][0];
	for(int j = 0; j < m ;j++) dp[0][j] = a[0][j];
	for(int i =0; i < n; i++)
	for(int j = 0; j < m ;j++)
		if(a[i][j]) dp[i][j] = 1+min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
	
	int ans = INT_MIN;
	for(int i = 0; i < n; i++)
	for(int j = 0; j < m; j++) 
		ans = max(ans, dp[i][j]);	

	return ans;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		a.assign(n, vi());
		dp.assign(n, vi());
		for(int i = 0; i < n; i++){
			a[i].assign(m, 0);
			dp[i].assign(m , 0);
			for(int j = 0; j < m; scanf("%d", &a[i][j++]));
		}
		printf("%d\n", solve());
	}
	return 0;
}