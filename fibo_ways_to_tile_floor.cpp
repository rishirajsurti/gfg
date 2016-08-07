#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[100];


int main(){
	ll t; scanf("%lld", &t);

	dp[0] = 0;
	dp[1] = 1;
	for(ll i =2 ; i <100; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	while(t--){
		ll w; scanf("%lld",&w);
		printf("%lld\n", dp[w+1]);
	}
	return 0;
}