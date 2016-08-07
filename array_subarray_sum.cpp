#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, s;
		scanf("%d %d", &n, &s);
		vector<int> a(n), asum(n,0);
		int sa = 0;
		for(int i = 0; i <n; scanf("%d", &a[i++]));

		for(int i = 0; i < n; i++){
			sa += a[i];
			asum[i] = sa;
		}

		map<int, int> m;
		int idx1, idx2;
		bool ok = false;
		for(int i = 0; i < n; i++){
			
			if(m.find(s-asum[i]) != m.end()){
				idx2 = i;
				idx1 = m[s-asum[i]];
				ok = true;
			}
			m[asum[i]] = i;
		}
		if(!ok) printf("-1\n");
		else printf("%d %d\n", idx1+1, idx2+1);
	}
	return 0;
}