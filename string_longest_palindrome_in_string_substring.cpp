#include <bits/stdc++.h>
using namespace std;

string solve(string s){
	int n = s.length();
	int dp[n][n];
	memset(dp, 0, sizeof dp);
	int maxlength = 1;
	for(int i =0 ; i< n; i++){
		dp[i][i] = 1;
	}
	int start = 0;
	for(int i =0 ; i < n-1; i++){
		if(s[i] == s[i+1]){
			dp[i][i+1] = 1;
			start = i;
			maxlength = 2;
		}
	}

	for(int k = 3; k <= n; k++){
		for(int i =0 ; i < (n-k+1); i++){
			int j = i+k-1;
			if(dp[i+1][j-1] && s[i]==s[j]){
				dp[i][j] =1 ;
				if(k > maxlength){
					start = i;
					maxlength = k;
				}
			}
		}
	}
	return s.substr(start, maxlength);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s,r;
		cin>>s;
		cout<<solve(s)<<endl;;
	}
	return 0;
}