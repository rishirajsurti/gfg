#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n);
		for(int i =0; i < n; scanf("%d", &a[i++]));
		int cur_sum = 0, max_sum = INT_MIN;
		for(int i =0 ;i < n; i++){
			cur_sum+=a[i];
			max_sum = max(max_sum, max(a[i], cur_sum));
		}
		printf("%d\n", max_sum);
	}
	return 0;
}