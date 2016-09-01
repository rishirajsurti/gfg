#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	int a, p = 1;
	int count = 0;
	while(n){
		a = n%10;

		if(a == 3) count = 0;
		if(a <= 3) count += a*p;
		else if (a > 3) count += (a-1)*p;

		n = n/10;
		p = p*9;
	}
	return count;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ;scanf("%d", &n);
		printf("%d\n", solve(n+1)-1);
	}
	return 0;
}