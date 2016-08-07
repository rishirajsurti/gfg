#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		a.push_back(0);
		stack<ii> s;
		s.push(ii(-1, -1));
		int ans =0 ;

		for(int i =0; i < a.size(); i++){
			int e = i;
			while(s.top().first > a[i]){
				ans = max(ans, s.top().first*(i-s.top().second));
				e = s.top().second;
				s.pop();
			}
			s.push(ii(a[i], e));
		}
		printf("%d\n", ans);
	}
	return 0;
}