#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int toNumber(vi &a){
	int n = 0;
	for(int i = 0; i < a.size(); i++)
		n = n*10 + a[i];
	return n;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vi a;
		int m = n; 
		while(n){
			a.push_back(n%10);
			n /= 10;
		}
		reverse(a.begin(), a.end());
		n = INT_MAX;
		do{
			int u = toNumber(a);
			if(u > m && u < n) n = u;
		} while(next_permutation(a.begin(), a.end()));

		if(n != INT_MAX) printf("%d\n", n);
		else printf("not possible\n");
	}
	return 0;
}