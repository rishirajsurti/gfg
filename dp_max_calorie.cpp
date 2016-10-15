#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vi a(n);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		vi dp(n);
		for(int i = 0; i < n; i++) dp[i] = a[i]; 

	}
	return 0;
}	