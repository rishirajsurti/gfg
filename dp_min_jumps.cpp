#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;
vi dp;
int n;
int solve(){
	dp[0] = 0;
	int start;
	for(start = 0; start < n; start++){
		for(int steps = 1; steps <= a[start] && (start+steps < n); steps++){
			dp[start+steps] = min(dp[start+steps], dp[start]+1);
		}
	}
	if(dp[n-1]==INT_MAX || dp[n-1] < 0) return -1;
	return dp[n-1];
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a.clear();
		dp.clear();
		a.assign(n, 0);
		dp.assign(n, INT_MAX);	
		for(int i =0 ; i< n; scanf("%d", &a[i++]));
		printf("%d\n", solve());
	}
	return 0;
}