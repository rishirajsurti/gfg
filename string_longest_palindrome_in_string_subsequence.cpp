#include <bits/stdc++.h>
using namespace std;

string solve(string s){
	string r= s, ans="";

	reverse(r.begin(), r.end());

	int n = r.length();

	int dp[n+1][n+1];

	string dir[n+1][n+1];

	for(int i =0; i <= n; i++){
		for(int j =0 ; j <= n; j++){

			if(i==0 || j==0) dp[i][j] = 0;

			else if(s[i-1]==r[j-1]) {
				dp[i][j]= 1+dp[i-1][j-1];
//				dir[i][j] = "diag";
			}
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
/*				if(dp[i-1][j] > dp[i][j-1]){
					dp[i][j] = dp[i-1][j];
					dir[i][j] = "up";
				}
				else{
					dp[i][j] = dp[i][j-1];
					dir[i][j] = "left";
				}
*/			}
		}
	}

	/*int i =n, j = n;
	while(i >= 0 && j >= 0){
		if(dir[i][j]=="diag"){
			ans += r[i-1];
			i--; j--;
		}
		else if(dir[i][j] == "up") i--;
		else if(dir[i][j] == "left") j--;
	}
	return ans;*/
	string lcs="";
	int i = n, j = n;
	while(i > 0 && j > 0){
		if(s[i-1]==r[j-1]){
			lcs += s[i-1];
			i--; j--;
		}
		else if(dp[i-1][j] > dp[i][j-1])
			i--;
		else j--;
	}
	return lcs;
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