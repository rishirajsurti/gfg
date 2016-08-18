#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;
vi dp;
int n;
int solve(){
	for(int i = 1; i < n; i++){
		for(int j = 0; j < i; j++){
			if(a[j] < a[i])
				dp[i] = max(dp[i], dp[j]+1);
		}
	}
	return *max_element(dp.begin(), dp.end());
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a.clear(); dp.clear();
		a.assign(n, 0); dp.assign(n, 1);
		for(int i =0 ; i< n; scanf("%d", &a[i++]));
		printf("%d\n", solve());
	}
	return 0;
}