#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

/*int solve(int n){
	printf("reached %d\n", n);
	if(n==0) return 0;
	//if(n < 0 || ((n%12)!=0 && (n%10)!=0)) return INT_MAX;
	if(n < 0 ) return INT_MAX;

	return 1 + min(solve(n-12), solve(n-10));

	// if(n%12==0 && n%10==0) return 1 + min(solve(n-12), solve(n-10));
	// else if(n%12 == 0) return 1 + solve(n-12);
	// else return 1+solve(n-10);
}
*/

int solve(int n){
	int ans_i = (INT_MAX>>1) , ans_j = (INT_MAX>>1);

	for(int i = 0; i <= 150; i++){
		for(int j = 0; j <= 150; j++){
			if(((i*10) + (j*12)) == n){
				if((i+j) < (ans_i+ans_j)){
					ans_i = i; ans_j = j;
				}
			} 
		}
	}
	return ans_i+ans_j == INT_MAX-1 ? -1 : ans_i+ans_j;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ; scanf("%d", &n);
//		int ans = solve(n);
		printf("%d\n", solve(n));
	}
	return 0;
}