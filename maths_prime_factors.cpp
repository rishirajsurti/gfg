#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi primes;

void sieve(int N){
	bitset<10010> bs;
	bs.set();
	bs[0] = bs[1] = 0;
	for(int i = 2; i < N; i++) if(bs[i]){
		for(int j = i*i; j < N; j+= i) 
			bs[i] = 0;
		primes.push_back(i);
	}
}

void solve(int n){
	int PF_idx = 0, PF = primes[PF_idx];
	while(n != 1 && (PF*PF <= n)){

		if(n%PF == 0) printf("%d ", PF);
		else{
			PF = primes[++PF_idx];
			continue;
		}
		int times = 0;
		while(n%PF == 0){ n /= PF; times++; }
		printf("%d ", times);
		PF = primes[++PF_idx];
	}
	if(n != 1) printf("%d 1", n);
	printf("\n");
}

int main(){
	sieve(10010);
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		solve(n);
	}
	return 0;
}