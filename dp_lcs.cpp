#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int ls1, ls2;
int **dp;

int solve(){
	// 		printf("reached\n");
	// printf("%d %d %d\n", ls1, ls2, sizeof(dp));
	for(int i = 0; i <= ls1; i++){
		for(int j = 0; j <= ls2; j++){
			if(i==0 || j==0) dp[i][j] = 0;

			else if(s1[i-1] == s2[j-1])
				dp[i][j] = dp[i-1][j-1]+1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[ls1][ls2];
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d", &ls1, &ls2);
//		printf("%d %d\n", ls1, ls2);
		cin>>s1;
		cin>>s2;
		// cout<<s1<<endl;
		// cout<<s2<<endl;
		dp = new int*[ls1+1];
		for(int i = 0; i <= ls1; i++)
			dp[i] = new int[ls2+1];

		//memset(dp, 0 , sizeof dp);

		printf("%d\n", solve());
	}	
	return 0;
}