#include <iostream>
#include <deque>
#include <cstring>
using namespace std;
#define R 3
#define C 3

int min(int a, int b, int c){
	int m;
	m = (a>b ? b : a);
	m = (m>c ? c : m);
	return m;
}

int MinCost(int c[R][C], int m, int n){
	int dp[R][C];
	memset(dp, 0, sizeof(dp));
	
	dp[0][0] = c[0][0];

	int i,j,di,dj;

	for(i=1; i<R; i++)
		dp[i][0] = c[i][0] + dp[i-1][0];



	for(j=1; j<C; j++)
		dp[0][j] = c[0][j] + dp[0][j-1];

	
	for(i=1; i<=m; i++){
		for(j=1; j<=n; j++)
			dp[i][j] = c[i][j] + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]);

	}

//	for(di=0; di<R; di++){
//		for(dj=0; dj<C; dj++)
//			cout<<dp[di][dj]<<" ";
//		cout<<endl;
//	}


	return dp[m][n];
	
}

int main(){
	 int cost[R][C] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };

      cout<<MinCost(cost, 2, 2)<<endl;
// 		cout<<min(27,3,4)<<endl;
      return 0;               
}