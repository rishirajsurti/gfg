#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int u;
		priority_queue<int, vector<int>, greater<int> > pq;
		for(int i =0 ; i< n; i++){
			scanf("%d", &u);
			pq.push(u);
		}
		int cost = 0;
		while(!pq.empty()){
			u = pq.top();
			pq.pop();
			if(pq.empty()) break;
			int v = u + pq.top();
			pq.pop();
			pq.push(v);
			cost+=v;
		}
		printf("%d\n", cost);
	}
	return 0;
}