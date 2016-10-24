#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve(ll n, ll a, ll b){
	ll dp[n+1];
	
	dp[0] = 0;
	for(ll i = 1; i <= n; i++){
		if(i%2 == 0)
			dp[i] = min(a+dp[i-1], b+dp[i/2]);
		else{
			dp[i] = min(a+dp[i-1], 
				min(dp[i/2] + a + b, dp[(i+1)/2] + a + b));
		}
	}	
	return dp[n];
}
/*typedef pair<int, int> ii;
map<int, bool> m;

ll solve(int n, int a, int b){
	queue<ii> q;
	q.push(ii(0, 0));
	int ans = INT_MAX;
	for(int i = 0; i < 2*n; i++){
		ii v = q.front(); q.pop();
		if(v.first == n) ans = min(ans, v.second);
		q.push(ii(v.first+1, v.second+a));
		q.push(ii())
	}
}
*/int main(){
	ll t; scanf("%lld", &t);
	while(t--){
		ll n, a, b; scanf("%lld %lld %lld", &n, &a, &b);
		printf("%lld\n", solve(n, a, b));
	}
	return 0;
}