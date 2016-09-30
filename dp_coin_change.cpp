#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vi a(n);
		for(int i =0 ; i < n; scanf("%d", &a[i++]));
		int V ; scanf("%d", &V);
		long long dp[V+1];
		memset(dp, 0, sizeof dp);
		
		dp[0] = 1;
		/*for(int i = 0; i < n; i++){
			for(int j = a[i]; j <= V; j+=a[i]) 
				++dp[j];
		}*/
		for(int i = 0; i < n; i++){
			for(int j = a[i]; j <= V; j++)
				dp[j]+= dp[j-a[i]];
		}
		printf("%lld\n", dp[V]);
	}
	return 0;
}