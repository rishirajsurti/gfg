#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ; scanf("%d", &n);
		long long num =1 , den = 1;
		for(int i = n+1; i <= 2*n; i++)
			num *= i;
		for(int i = 1; i <= n; i++)
			den *= i;

		den *= (n+1);

		printf("%lld\n", (num/den));
	}
	return 0;
}