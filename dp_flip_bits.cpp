#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int solve(vector<int> &a){
	/*vector<int> dp(a.size() ,0);
	dp[0] = a[0];
	for(int i = 1; i < a.size(); i++){
		for(int j = i-1; j >=0; j--){
			dp[i] = max(dp[i], dp[j]+a[i]);
		}
	}
	return *max_element(dp.begin(), dp.end());*/
	int cur_sum = 0, max_sum = INT_MIN;
	for(int i = 0; i < a.size(); i++){
		//cur_sum += a[i];
		//if(cur_sum < 0) cur_sum = 0;
		cur_sum = max(a[i], cur_sum+a[i]);
		max_sum = max(cur_sum, max_sum);
	}
	return max_sum;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vi a(n);
		int u;
		for(int i = 0; i < n; i++){
			scanf("%d", &u);
			if(u==0) a[i] = 1;
			else if(u==1) a[i] = -1;
		}
		printf("%d\n", solve(a));
	}
	return 0;
}