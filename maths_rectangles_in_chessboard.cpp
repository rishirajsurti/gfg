#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;
typedef long long ll;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		printf("%lld\n", ((n*(n-1))/2)*((n*(n-1))/2));
	}
	return 0;
}