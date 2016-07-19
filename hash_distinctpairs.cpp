#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		map<int, int> m;
		map<ii, int> cnt;

		vector<int> a(n);
		for(int i =0 ; i < n; i++){
			scanf("%d", &a[i]);
			++m[a[i]];
		}
		int k; scanf("%d", &k);
		int ans = 0;
		for(int i = 0; i < n; i++){
			--m[a[i]];
			if(m[a[i]-k]){
				if(cnt.find(ii(a[i], a[i]-k)) == cnt.end()
					&& cnt.find(ii(a[i]-k, a[i])) == cnt.end()){
					ans++;
					cnt[ii(a[i], a[i]-k)] = 1;
				}
			}
			++m[a[i]];
		}
		printf("%d\n", ans);
	}
	return 0;
}