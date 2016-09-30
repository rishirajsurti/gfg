#include <bits/stdc++.h>
using namespace std;

string solve(string s){
	int n = s.length();
	int dp[n][n];
	memset(dp, 0, sizeof dp);
	int start_idx, max_length;
	for(int i =n-1 ; i >=0; i--){
		dp[i][i] = 1;
		max_length = 1;
		start_idx = i;
	}

	for(int i =n-2 ;i >=0; i--){
		if(s[i]==s[i+1]){
			dp[i][i+1] =1;
			max_length = 2;
			start_idx = i;
		}
	}

	for(int k = 1; k <= n; k++){
		for(int i = 0; i < n-k+1; i++){
			int j = i+k-1;
			if(s[i]==s[j] && dp[i+1][j-1]){
				dp[i][j] = 1;
				if(k > max_length){
					max_length = k;
					start_idx = i;
				}
				else if(k==max_length && i < start_idx){
					start_idx = i;
				}
			}
		}
	}
	return s.substr(start_idx, max_length);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		cout<<solve(s)<<endl;
	}
	return 0;
}