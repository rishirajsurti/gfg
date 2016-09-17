#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;

bool solve(int l, int r){

//	printf("%d %d\n", l, r);
	if(l>=r) return true;
	int root = a[l];
	int div = l;
	while(div <= r && a[div] <= a[l]) div++;
	//now a[div] > root;
	for(int i = div; i<=r; i++){
		if(a[i] < a[l]) return false;
	}
	return solve(l+1, div-1) && solve(div, r);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		for(int i = 0 ; i < n; scanf("%d", &a[i++] ));
		printf("%d\n", solve(0, n-1));
	}
	return 0;
}