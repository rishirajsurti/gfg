#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int N = 2*n+2;
		vi a(N);
		for(int i = 0; i < N; scanf("%d", &a[i++]));
		int x = 0, y = 0;
		for(int i = 0; i < N; i++){
			x ^= a[i];
		}

		int set_bit = x & ~(x-1);
		x = y = 0;
		for(int i = 0; i < N; i++){
			if(a[i] & set_bit){
				x ^= a[i];
			}
			else
				y ^= a[i];
		}
		if(x > y) swap(x,y);
		printf("%d %d\n", x, y);
	}
	return 0;
}