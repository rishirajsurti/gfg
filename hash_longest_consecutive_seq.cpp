#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ; scanf("%d", &n);
		map<int, bool> m;
		int u;
		for(int i = 0; i < n; i++){
			scanf("%d", &u);
			m[u] = true;
		}

		map<int, bool>::iterator it;
		int maxlen = 1, curlen = 0;
		for(it = m.begin(); it != m.end(); it++){
			int start = it->first;
			curlen = 0;
			while(m[start]){
				start++;
				curlen++;
			}
			maxlen = max(curlen, maxlen);
		}
		printf("%d\n", maxlen);

	}
	return 0;
}