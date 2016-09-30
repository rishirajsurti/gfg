#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ; scanf("%d", &n);
		int start, end;
		priority_queue<ii, vector<ii>, greater<ii> > pq;
		for(int i = 0; i < n; i++){
			scanf("%d %d", &start, &end);
			pq.push(ii(start, end));
		}
		vector<ii> ans;
		while(!pq.empty()){
			ii u = pq.top(); pq.pop();
			start = u.first;
			end = u.second;
			while(!pq.empty() && (pq.top()).first <= end){
				//starts befor the current activity
				end = (pq.top()).second;
				pq.pop();
			}
			ans.push_back(ii(start, end));
		}
		for(int i = 0; i < ans.size(); i++){
			printf("%d %d ", ans[i].first, ans[i].second);
		}
		printf("\n");
	}
	return 0;
}