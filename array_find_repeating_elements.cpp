#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d", &n);
		int x= 0, y = 0, a = 0, b= 0;
		vi arr(n+2, 0);
		for(int i = 1; i <= n+2; i++){
			scanf("%d", &a);
			arr[i-1] = a;
			x ^= a;
		}
		for(int i = 1; i <=n; i++)
			x ^= i;

		int set_bit = x & ~(x-1);
		a = 0; b = 0;
		for(int i = 0; i < n+2; i++){
			if(arr[i]&set_bit){
				a ^= arr[i];
			}
			else
				b ^= arr[i];
		}
		for(int i = 1; i <=n; i++)
			if(i & set_bit)
				a ^= i;
			else
				b ^= i;

		printf("%d %d\n", );
	}
	return 0;
}