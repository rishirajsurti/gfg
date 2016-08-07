#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		vector<int> a(n);
		for(int i =0 ; i < n; scanf("%d", &a[i++]));
		sort(a.begin(), a.end());
		int ans = 1e6;
		for(int i = 1; i < a.size(); i++){
			ans = min(ans, a[i]-a[i-1]);
		}
		printf("%d\n", ans);
	}
	return 0;
}