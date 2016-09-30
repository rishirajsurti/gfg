#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vi a;
		a.assign(n, 0);
		for(int i =0 ; i < n; scanf("%d", &a[i++]));
		int k; scanf("%d", &k);
		partial_sort(a.begin(), a.begin()+k, a.end());
		printf("%d\n", a[k-1]);
	}
	return 0;
}