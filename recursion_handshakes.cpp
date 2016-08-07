#include <bits/stdc++.h>
using namespace std;

unsigned long int catalan(unsigned int n){
	if (n<=1) return 1;

	unsigned long int ans = 0;
	for(int i = 0; i < n;  i++)
		ans += catalan(i)*catalan(n-i-1);
	return ans;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		unsigned long int n; scanf("%lu", &n);
		printf("%lu\n", catalan(n/2));
	}
	return 0;
}