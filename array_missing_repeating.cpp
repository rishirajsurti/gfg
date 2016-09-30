#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
	int t ; scanf("%d", &t);
	while(t--){
		int n ;scanf("%d", &n);
		vi a(n);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		int x=0, y=0;
		for(int i = 0; i < n; i++){
			x ^= (i+1);	
			y ^= a[i];
		}
		int z = x^y;
		int set_bit_no = z & ~(z-1);

		x = 0; y = 0;
		for(int i = 0; i < n; i++){
			if(a[i]&set_bit_no) x ^= a[i];
			else y ^= a[i];
		}

		for(int i = 1; i <= n; i++)
			if(i & set_bit_no) x ^= i;
			else y ^= i;

		if(count(a.begin(), a.end(), x) ==2)
			printf("%d %d\n", x,y);
		else
			printf("%d %d\n", y, x);
	}
	return 0;
}