#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n; 
vi a;
vector<vi> dp;

/*int solve(vi &a, int n){
	int dp[n][2];
	memset(dp, 0, sizeof dp);
	dp[0][0] = a[0];
	dp[0][1] = a[0];
	for(int i = 1; i < n; i++){
		for(int j = 0; j < 2; j++){
			dp[i][j] = 
		}
	}
}

*/

int solve(int idx, int consec_days){
	if(idx == n) return 0; //can't consume anymore;
	//either can consume a[idx] -> consec_days + 1
	//or can forego a[idx] consec_days = 0;

	if(dp[idx][consec_days] != -1) return dp[idx][consec_days];

	if(consec_days == 2){
		return dp[idx][consec_days] = solve(idx+1, 0);
	}
	else
		return dp[idx][consec_days] = max(a[idx]+solve(idx+1, consec_days+1), solve(idx+1, 0));

}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		dp.assign(n, vi());
		for(int i = 0; i < n; i++) dp[i].assign(3, -1);

		for(int i =0; i < n; scanf("%d", &a[i++]));
		printf("%d\n", solve(0,0));
	}
	return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vi a(n);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		vi dp(n);
		for(int i = 0; i < n; i++) dp[i] = a[i]; 

	}
	return 0;
}	*/