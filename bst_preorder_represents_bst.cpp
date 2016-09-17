#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;

bool solve(){
	stack<int> s;
	int root = INT_MIN;
	for(int i = 0; i < a.size(); i++){
		if(a[i] < root) return false;
		while(!s.empty() && a[i] > s.top()){
			root = s.top(); s.pop();
		}
		s.push(a[i]);
	}
	return true;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		for(int i = 0 ; i < n; scanf("%d", &a[i++] ));
		printf("%d\n", solve());
	}
	return 0;
}