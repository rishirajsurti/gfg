#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 82
ll dp[N];

void process(){
	dp[0] = 0;
	dp[1] = dp[2] = dp[3] = 1;
	dp[4] = 2;

	for(ll i = 4; i < N; i++){
		dp[i] = dp[i-1] + dp[i-4];
	}
}

int main(){
	ll t; scanf("%lld", &t);
	process();
	while(t--){
		ll n; scanf("%lld", &n);
		printf("%lld\n", dp[n+1]);
	}
	return 0;
}