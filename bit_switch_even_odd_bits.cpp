#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	int even_bits = n & 0xAAAAAAAA;
	int odd_bits = n & 0x55555555;

	return ((even_bits >> 1) | (odd_bits << 1));
}

int main(){
	printf("%d\n", solve(23));
}