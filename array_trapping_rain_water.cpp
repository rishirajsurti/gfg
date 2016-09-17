#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;

int solve(){
	int n = a.size();
	vi left(n), right(n);
	left[0] = a[0];
	int ans =0 ;
	for(int i =1; i < n; i++){
		left[i] = max(left[i-1], a[i]);
	}

	right[n-1] = a[n-1];
	for(int i = n-2; i >= 0; i--)
		right[i]= max(right[i+1], a[i]);

	for(int i = 0; i < n; i++){
		ans += min(left[i], right[i]) - a[i];
	}
	return ans;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		for(int i =0; i < n ;scanf("%d", &a[i++]));
		printf("%d\n", solve());
	}
	return 0;
}