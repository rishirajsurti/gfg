#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int dp[MAX], Value, coins[MAX], c;

int solve(){
	dp[0] = 0;
	
	for(int i =1; i <= V; i++)
		dp[i] = INT_MAX;

	for(int i = 1; i <= Value; i++){
		for(int j = 0; j < c; j++){
			if(coins[j] >= i){
				int res = table[i-coins[j]];
				if(res != INT_MAX && (res+1) < table[i])
					table[i] = res+1;
			}		
		}
	}
	return table[V];
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &c);
		for(int i = 0; i < c; scanf("%d", &coins[i++]));
		scanf("%d", &Value);
		printf("%d\n", solve());
	}
}