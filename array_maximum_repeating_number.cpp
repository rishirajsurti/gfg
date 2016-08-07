#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,k; scanf("%d %d", &n, &k);
		vi a(n);
		for(int i = 0; i < n; scanf("%d", &a[i++]));

		for(int i = 0; i < n; i++){
			a[a[i]%k] += k;
		}
		int maxtimes = a[0], minelement=a[0], ans=0;
		for(int i = 1; i < a.size(); i++){
			if(a[i] > maxtimes){
				maxtimes = a[i];
				minelement = a[i];
				ans = i;
			}
			else if(a[i] == maxtimes && a[i]<minelement){
				ans = i;
				minelement = a[i];
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}