#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
int dp[102];

int main(){
	memset(dp, 0, sizeof dp);

	/*dp[1] = 1;

	for(int i = 2; i < 102; i++){
		dp[i] = ((dp[i-1]) + (dp[i-2]));
	}*/
	dp[1] = 1;
	for(int i = 2; i < 102; i++) ++dp[i];
	for(int i = 2; i < 102; i+=2) ++dp[i];

	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
	return 0;
}