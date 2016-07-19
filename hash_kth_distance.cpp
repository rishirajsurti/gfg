#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; scanf("%d", &t);

	while(t--){
		int n, k;
		scanf("%d %d", &k, &n);
		vector<int> a(n);
		map<int, int> m;
		set<int> s;
		bool found = false;

		for(int i = 0 ; i < n; i++){
			scanf("%d", &a[i]);

			if(i >= k+1)
				--m[a[i-k-1]];
			++m[a[i]];
			if(m[a[i]] > 1){
				found = true;
			//	printf("found a[i] %d\n", a[i]);

			}
//			if(!m.empty() && m.find(a[i]) != m.end()) {
//			}
/*
			if(s.find(a[i]) != s.end()) found = true;
			s.insert(a[i]);
			if(i >= k+1)
				s.erase(a[i-k-1]);
*/			/*
			if(m.count(a[i])) found = true;
			++m[a[i]];
			if(i >= k) --m[a[i-k]];*/
			/*if(i >= k){
				m[a[i-k]]--;
				++m[a[i]];
				if(m[a[i]] >1) found = true;
			}
			else{
				++m[a[i]];
			}*/
		}
		printf("%s\n", found ? "True" : "False");
	}
	return 0;
}