#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,k; scanf("%d %d", &n, &k);
		a.clear();

		a.assign(n, 0);
		for(int i =0 ; i< n; scanf("%d", &a[i++]));
		map<int, int> m;
		map<int, int>::iterator it;
		for(int i = 0; i < k; i++)
			++m[a[i]];

		vi ans;
		it = max_element(m.begin(), m.end());
		ans.push_back(it->first);
		for(int i = k; i < a.size(); i++){
			if(m[a[i-k]] == 1) m.erase(a[i-k]);
			else --m[a[i-k]];
			++m[a[i]];
			it = max_element(m.begin(), m.end());
			ans.push_back(it->first);
		}
		for(int i =0 ;i < ans.size(); i++)
			printf("%d ",ans[i] );
		printf("\n");
	}
	return 0;
}