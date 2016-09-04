#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	int parity = 0; //initially 0;
	// p = 0, even, p =1 , odd
	while(n){
		parity = !parity;
		n = n & (n-1);
	}
	return parity;
}

int main(){
	printf("%d\n", solve(8));
	return 0;
}