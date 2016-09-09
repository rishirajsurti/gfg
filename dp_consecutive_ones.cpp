#include <bits/stdc++.h>
using namespace std;

/*int maxn;
 solve(int current, int maxn, int idx){
 	//idx last where one can be;
 	//idx  < (n-1);
 	//idx = 0 , lsb, 
 	//two choices
 	//each choice a number;
 	//dp -> dp[number]
 	solve(current | (1<<idx), maxn, idx+2), solve(current, maxn, idx+1);

 }
*/
#define M 1000000007

int solve(int n){
	int a[n], b[n];
	a[0] = b[0] = 1;
	for(int i = 1; i < n; i++){
		a[i] = (a[i-1]+b[i-1])%M ;
		b[i] = (a[i-1])%M;
	}
	return ((a[n-1]%M)+(b[n-1]%M))%M;
}
 int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		printf("%d\n", solve(n));
	}
	return 0;
}