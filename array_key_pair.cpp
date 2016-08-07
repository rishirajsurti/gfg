#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int n, p;
map<int, int> m;

bool solve(){
	for(int i =0; i < n; i++){
		
		if(m.find(p-a[i]) != m.end())
			return true;
		m[a[i]] = 1;
	}
	return false;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		a.clear();
		m.clear();
		scanf("%d %d", &n, &p);
		a.assign(n, 0);
		for(int i = 0; i< n; scanf("%d", &a[i++]));
		printf("%s\n", solve() ? "Yes" : "No");
	}
	return 0;
}