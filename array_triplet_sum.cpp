#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int n, p;
map<int, int> m;

bool solve(){
	sort(a.begin(), a.end());
	for(int i =0; i < n -2; i++){
		int l = i+1;
		int r = n-1;
		while(l<=r){
			if(a[i]+a[l]+a[r]==p) return 1;
			if(a[i]+a[l]+a[r] < p) l++;
			else r--;
		}
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
		printf("%d\n", solve());
	}
	return 0;
}