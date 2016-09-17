#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;

int max_crossover(int l, int m, int r){
	int left_sum = -1e6;
	int right_sum = -1e6;

	int maxleft, maxright;
	int sum = 0;
	for(int i = m; i >= l; i--){
		sum += a[i];
		if(sum > left_sum){
			left_sum = sum;
			maxleft = i;
		}
	}
	sum =0 ;
	for(int i = m+1; i <= r; i++){
		sum += a[i];
		if(sum > right_sum){
			right_sum = sum;
			maxright = i;
		}
	}
	return left_sum+right_sum;
}

int solve(int l, int r){
	if(l==r) return a[l];
	int m = (l+r)/2;
	int left = solve(l, m);
	int right = solve(m+1, r);
	int crossover = max_crossover(l, m, r);

	return max(max(left, right), crossover);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		for(int i =0; i < n; scanf("%d", &a[i++]));
		printf("%d\n", solve(0, n-1));
	}
	return 0;
}