#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int dp[1010][101];

/*int solve(string &a, int m, string &b, int n){

	if(dp[m][n] != 0) return dp[m][n];
	
	if(a[m] == b[n]){
		dp[m][n] = 
	}
}
*/
/*int ans;
void solve(string &a, int m, string &b, int n){

	if(m == a.length() && n = b.length()) {
		ans++;
		return;
	}

	if(a[m] == b[n]){
		solve(a, m+1, b, n+1);
		solve(a, m+1, b, n);
	}

}
*/


int solve(string a, string b){
	int m = a.length(), n = b.length();
	int dp[m+1][n+1];
	memset(dp, 0, sizeof dp);
	for(int i = 0; i <= m ;i++) dp[i][0] = 1; //b="", only 1 distinct trans, delete all chars

	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){

			if(a[i-1] == b[j-1]){
				dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
			}
			else
				dp[i][j] = dp[i-1][j];
		}
	}

	/*for(int i = 0; i <= m; i++){
		for(int j = 0; j <= n; j++){
			printf("%4d", dp[i][j]);
		}
		printf("\n");
	}*/
	return dp[m][n];
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		string a, b;
		cin>>a;
		cin>>b;
		memset(dp, 0, sizeof dp);
		printf("%d\n", solve(a,b));
	}
	return 0;
}