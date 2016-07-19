#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d", &n);
		int ans, u;
		for(int i = 0; i < n; i++){
			scanf("%d", &u);
			if(i==0) ans = u;
			else ans = ans ^ u;
		}
		printf("%d\n", ans);
	}
	return 0;
}