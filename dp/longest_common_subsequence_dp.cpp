#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int max(int a, int b){
	return (a>b ? a:b);
}
int lcs(string s1, string s2){
	int n1,n2;
	n1 = s1.size();
	n2 = s2.size();

	int dp[n1+1][n2+1];
	memset(dp, 0 , sizeof(dp));

	int i,j;
	for(i=0; i<=n1; i++){
		for(j=0; j<=n2; j++){

			if(i==0 || j==0)
				dp[i][j] = 0;
			else{
				if(s1[i-1] == s2[j-1])
					dp[i][j] = 1 + dp[i-1][j-1];
				else
					dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	return dp[n1][n2];
}

int main(){
	string s1, s2;
	s1 = "AGGTAYB";
	s2 = "GXTXAYB";
	cout<<lcs(s1,s2)<<endl;
	return 0;
}