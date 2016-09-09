#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		ll n, m;
		scanf("%lld %lld", &n, &m);
		vector<ll> a,b;
		a.assign(n, 0); b.assign(m, 0);
		for(ll i =0 ; i < n; scanf("%lld", &a[i++]));
		for(ll j = 0; j < m; scanf("%lld", &b[j++]));
		sort(a.rbegin(), a.rend());
		sort(b.rbegin(), b.rend());
		ll i = 0, j = 0, ans = 0;
		while(i < n && j < m){
			ans += a[i]*b[j];
			i++; j++;
		}
		printf("%lld\n", ans);
	}
	return 0;
}