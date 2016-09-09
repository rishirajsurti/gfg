#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		vi r;
		int R, N;
		scanf("%d %d", &R, &N);
		r.assign(R, 0);
		int ans = 0;
		for(int i = 0; i < R; i++){
			scanf("%d", &r[i]);
			r[i] = r[i]*r[i];
		}
		int x, y;
		for(int i = 0; i < N; i++){
			scanf("%d %d", &x, &y);
			int d = x*x + y*y;
			if(d > r[0]) continue;
			else {
				int j = 0;
				while(r[j] > d) j++;
				ans += (j);
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}