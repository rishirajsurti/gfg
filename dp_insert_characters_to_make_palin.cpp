#include <bits/stdc++.h>
using namespace std;

int **dp, n;
/*
int solve(string s, int i, int j){
	printf("here\n");
	if(i > j) return INT_MAX;
	
	if(dp[i][j] != -1) return dp[i][j];
	if(s[i]==s[j]) dp[i][j] = solve(s, i+1, j-1);
	else dp[i][j] = 1+min(solve(s, i+1, j), solve(s, i, j-1));
	return dp[i][j];
}
*/

/*int solve(string s, int i, int j){
	if(i > j) return INT_MAX;
	if(i==j) return dp[i][j] = 0;

	if( i == j-1) return dp[i][j] = (s[i]==s[j] ? 0 : 1);

	if(dp[i][j] != -1) return dp[i][j];

	return dp[i][j] = (s[i] == s[j] ? solve(s, i+1, j-1) : (1+min(solve(s,i+1,j), solve(s,i, j-1))));
}*/

int solve(string s){
	int n = s.length();
	int dp[n][n], l, h;
	memset(dp, 0, sizeof dp);
	for(int k = 1; k < n; k++){
		for(l = 0, h = k; h < n; l++, h++){
			dp[l][h] = (s[l]==s[h]) ? dp[l+1][h-1] : (1+min(dp[l][h-1],dp[l+1][h]));
		}
	}
	return dp[0][n-1];
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
/*		n = s.length();

		dp = new int*[n];
		for(int i = 0; i < n; i++) dp[i] = new int[n];

	
		memset(dp, -1, sizeof dp);

		for(int i = 0; i < n; i++)
			dp[i][i] = 0;
		

		for(int i = 0; i < n-1; i++)
			if(s[i]==s[i+1]) dp[i][i+1] = 0;

*/
		cout<<solve(s)<<endl;
		
	}
	return 0;
}