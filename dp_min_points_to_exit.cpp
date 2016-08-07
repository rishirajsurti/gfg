#include <bits/stdc++.h>
using namespace std;
#define N 12
int a[N][N], dp[N][N];

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int r,c; scanf("%d %d", &r, &c);
		for(int i = 0; i < r; i++)
			for(int j = 0; j < c; j++)
				scanf("%d", &a[i][j]);

		dp[r-1][c-1] = ((a[r-1][c-1] > 0 )? 1 : abs(a[r-1][c-1])+1);
			
		for(int i = r-2; i>=0; i--){
			dp[i][c-1] = max(dp[i+1][c-1]-a[i][c-1], 1);	
		}

		for(int j = c-2; j>=0; j--){
			dp[r-1][j] = max(dp[r-1][j+1] - a[r-1][j], 1);
		}

		for(int i = r-2; i >= 0; i--){
			for(int j = c-2; j>=0; j--){
				int mpe = min(dp[i+1][j], dp[i][j+1]);
				//minimum points on exit.
				dp[i][j] = max(mpe - a[i][j], 1);
			}
		}
		printf("%d\n", dp[0][0]);
		
	}

}