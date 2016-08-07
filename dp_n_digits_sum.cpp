#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;

llu lookup[101][50001];

llu countRec(llu n, llu sum){
	if(n==0)
		return sum==0;

	if(lookup[n][sum] != -1)
		return lookup[n][sum];

	llu ans = 0;
	for(llu i = 0 ; i <= 9; i++){
		if(sum - i >= 0)
			ans += countRec(n-1, sum-i);
	}
	return lookup[n][sum] = ans;

}

llu finalCount(llu n, llu sum){
	memset(lookup, -1, sizeof lookup);
	llu ans = 0;
	for(llu i = 1; i <= 9; i++){
		if(sum-i>=0)
			ans+= countRec(n-1, sum-i);
	}
	return ans;
}

int main(){
	llu t; scanf("%llu", &t);
	while(t--){
		llu n, sum;
		scanf("%llu %llu", &n, &sum);
		llu ans = finalCount(n, sum);
		if(ans < 1) 
			printf("-1\n");
		else
			printf("%llu\n", ans);
	}
	return 0;
}