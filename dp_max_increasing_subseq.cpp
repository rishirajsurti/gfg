#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a, dp;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.clear(); dp.clear();
		a.assign(n, 0); dp.assign(n, 0);
		for(int i =0 ; i< n; scanf("%d", &a[i++]));
		//sort(a.begin(), a.end());
		for(int i =0 ; i< n; i++)
			dp[i] = a[i];

		for(int i = 1; i < n; i++){
			for(int j = 0; j < i; j++){
				if(a[j] < a[i] && a[i]+dp[j] > dp[i])
					dp[i] = dp[j] + a[i];
			}
		}
		printf("%d\n", *max_element(dp.begin(), dp.end()));
	}
	return 0;
}