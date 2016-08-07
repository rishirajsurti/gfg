#include <bits/stdc++.h>
using namespace std;
vector<int> a;

int solve(int low, int high){
	if(high < low) return a[0];
	if(high == low) return a[low];
	int mid = (low+high)/2;

	if(mid < high && a[mid+1] < a[mid])
		return a[mid+1];
	if(low < mid && a[mid] < a[mid-1])
		return a[mid];

	if(a[high] > a[mid])
		return solve(low, mid-1);
	return solve(mid+1, high);
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		a.clear();
		int n; scanf("%d", &n);
		a.assign(n, 0);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		printf("%d\n", solve(0, n-1));
	}
}