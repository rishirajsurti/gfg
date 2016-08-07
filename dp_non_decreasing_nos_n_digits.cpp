#include <bits/stdc++.h>
using namespace std;

long long solve(int n){
	int N = 10;
	long long count = 1;
	for(int i = 1; i <= n; i++){
		count *= (N+i-1);
		count /= i;
	}
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%lld\n", solve(n));
	}
}