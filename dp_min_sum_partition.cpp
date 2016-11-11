#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n, ans;
vi a;

void solve(int idx, int left_sum, int right_sum){
	//printf("here")
	if(idx == n){
		ans = min(ans, abs(left_sum-right_sum));
		return;
	}

	solve(idx+1, left_sum+a[idx], right_sum);
	solve(idx+1, left_sum, right_sum+a[idx]);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		ans = INT_MAX;
		solve(0, 0, 0);
		printf("%d\n", ans);
	}
	return 0;
}