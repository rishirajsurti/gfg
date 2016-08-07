#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

/*ll p ( int n){
	ll ans = 1;
	for( ll i = 1; i <= n; i++)
		ans *= 10;
	return ans;
}*/
ll find_nos_atleast_one_zero(ll d){
	//with d digits
	return 9*(pow(10,d-1) - pow(9,d-1));
}

ll find_count_upto(ll d){
	ll a1 = 9*( (pow(10,d)-1)/(10-1));
	ll a2 = 9*( (pow(9,d) -1)/(9-1));
	return a1 - a2;
}

int main(){
	ll t; scanf("%lld", &t);
	while(t--){
		ll n; scanf("%lld", &n);
		cout<<find_count_upto(n)<<endl;
	}
	return 0;
}