#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int dp[510];

int minnn(int a, int b, int c){
	return min(min(a,b), c);
}

void solve(){
	memset(dp, 0, sizeof dp);
	dp[0] = 1;
	int i2, i3, i5, next_ugly_no;
	i2 = i3 = i5 = 0;
	int next_mul2 = 2, next_mul3 = 3, next_mul5 = 5;

	for(int i = 1; i < 510; i++){
		next_ugly_no = minnn(next_mul2, next_mul3, next_mul5);
		dp[i] = next_ugly_no;
		if(next_ugly_no == next_mul2){
			i2++;
			next_mul2 = dp[i2]*2;
		}
		if(next_ugly_no == next_mul3){
			i3++;
			next_mul3 = dp[i3]*3;
		}

		if(next_ugly_no == next_mul5){
			i5++;
			next_mul5 = dp[i5]*5;
		}
	}
}

int main(){
	int t; scanf("%d", &t);
	solve();
	while(t--){
		int n ; scanf("%d", &n);
		printf("%d\n", dp[n-1]);
	}
	return 0;
}