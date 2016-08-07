#include <bits/stdc++.h>
using namespace std;

int csb(int n){
	int ans = 0;
	while(n){
		if(n & 0x01)
			ans++;
		n >>= 1;
	}
	return ans;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int ans = 0;
		for(int i = 1; i<=n; i++)
			ans += csb(i);
		cout<<ans<<endl;
	}
}