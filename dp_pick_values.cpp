#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;

int sum_ans;

/*void solve(int idx, int cur_sum){
	if(idx >= a.size()){
		sum_ans = min(sum_ans, cur_sum);
		return;
	}
	for(int i = idx; i < a.size() && i < idx+4; i++)
		solve(i+4, cur_sum+a[idx]);
}*/

int solve(){
	int n = a.size();
	if(n < 5) return *min_element(a.begin(), a.end());
	vi dp(n, 0);
	dp[0] = a[0];
	dp[1] = a[1];
	dp[2] = a[2];
	dp[3] = a[3];
	for(int i = 4; i < n; i++){
		dp[i] = min(dp[i-4], min(dp[i-3], min(dp[i-2], dp[i-1]))) + a[i];
	}
	int ret = INT_MAX;
	for(int i = n-1, count = 0; count < 4; count++, i--)
		ret = min(ret, dp[i]);
	return ret;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		for(int i =0 ; i < n; scanf("%d", &a[i++]));
//		sum_ans = INT_MAX;
//		solve(0, 0);

		printf("%d\n", solve());
	}
	return 0;
}