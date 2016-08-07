#include <bits/stdc++.h>
using namespace std;
#define MAX 10010
bitset<MAX> bs, bs2;
vector<int> primes;
void solve(){
	bs.set();
	bs[0] = bs[1] = 0;
	for(int i =2; i < MAX; i++){
		if(bs[i]){
			for(int j = i*i; j < MAX; j+=i)
				bs[j] = 0;
			primes.push_back(i);
		}
	}
}
int main(){
	solve();
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		for(int i = 0; primes[i] <= n; i++){
			printf("%d ", primes[i]);
		}
		printf("\n");
	}
	return 0;
}