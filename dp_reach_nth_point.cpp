#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[100];
ll coins[2] = {1, 2};
void solve(){
	memset(dp, 0, sizeof dp);
	dp[0] = 1;
	/*for(ll i = 0; i < 2; i++){
		for(ll j = coins[i]; j< 100; j++){
			dp[j] += dp[j-coins[i]];
		}
	}*/
	dp[1] = 1;
	for(int i = 2; i < 100; i++)
		dp[i] = dp[i-1]+dp[i-2];
}
int main(){
	ll t; scanf("%lld", &t);
	solve();
	while(t--){
		ll n;
		scanf("%lld", &n);
		printf("%lld\n", dp[n]);
	}
	return 0;
}