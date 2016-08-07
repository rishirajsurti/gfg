#include <bits/stdc++.h>
using namespace std;
#define N 200
bitset<N> dp;
void process(){
	dp.set();
	dp[0] = 0;
	dp[1] = 0;
	for(int i = 2; i < N; i++){
		if(dp[i]){ // i is prime
			for(int j = i*i; j < N; j+=i)
				dp[j] = 0;
		}
	}
}


int main(){
	int t; scanf("%d", &t);
	process();
	while(t--){
		int n; scanf("%d",&n);
		for(int i = 2; i < n; i++){
			if(dp[i]){
				for(int j = 2; j < n; j++)
				if(dp[j]){
					if(i*j <= n)
						printf("%d %d ", i,j);
				}
			}
		}
		printf("\n");
	}
	return 0;
}