#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
	int n; scanf("%d", &n);
	vi a(n);
	for(int i = 0; i < n; scanf("%d",&a[i++]));

	int dp[n][2];
	memset(dp, 0, sizeof dp);
	//dp[0][0] = dp[0][1] = 1;
	for(int i = 0; i < n; i++)
		dp[i][0] = dp[i][1] = 1;

	int ans = 1;

	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[j] < a[i]){
				dp[i][0] = max(dp[i][0], dp[j][1]+1);
			}
			else if(a[j] > a[i]){
				dp[i][1] = max(dp[i][1], dp[j][0]+1);
			}
			ans = max(ans, max(dp[i][0], dp[i][1]));
		}
	}
}