#include <bits/stdc++.h>
using namespace std;
vector<int> a;

int solve(int low, int high){
	if(high < low) return a[0];
	if(high == low) return a[low];
	int mid = (low+high)/2;

	if(mid < high && a[mid+1] < a[mid])
		return mid+1;
	if(low < mid && a[mid] < a[mid-1])
		return mid;

	if(a[high] > a[mid])
		return solve(low, mid-1);
	return solve(mid+1, high);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		a.clear();
		int n,m; scanf("%d", &n);
		a.assign(n, 0);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		scanf("%d", &m);
		int pivot = solve(0, n-1);

		vector<int>::iterator it;
		if(binary_search(a.begin(), a.begin()+pivot, m)){
			it = lower_bound(a.begin(), a.begin()+pivot, m);
			printf("%ld\n", distance(a.begin(), it));

		}else if( binary_search(a.begin()+pivot-1, a.end(), m)){
			it = lower_bound(a.begin()+pivot, a.end(), m);			
			printf("%ld\n", distance(a.begin(), it));
		}
		else printf("-1\n");
	}
	return 0;
}