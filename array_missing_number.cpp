#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int all_xor=0;
		for(int i = 1; i <= n; i++)
			all_xor ^= i;

		int u;
		for(int i = 1; i <= n-1; i++){
			scanf("%d", &u);
			all_xor ^= u;
		}
		printf("%d\n", all_xor);
	}
	return 0;
}