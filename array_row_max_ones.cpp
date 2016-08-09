#include <bits/stdc++.h>
using namespace std;
int a[53][53];

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, m; scanf("%d %d", &n, &m);
		int cur_sum=0, max_sum=INT_MIN, ans= -1;
		for(int i = 0; i < n; i++){
			cur_sum = 0;
			int u;
			for(int j = 0; j < m; j++){
				scanf("%d", &u);
				cur_sum+= u;
			}
			if(cur_sum > max_sum){
				max_sum = cur_sum;
				ans = i;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}