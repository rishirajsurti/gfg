#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,d;
		scanf("%d %d", &n, &d);
		d = d%n;
		vector<int> a(2*(n+1));
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
			a[i+n] = a[i];
		}
		for(int i = d+1; i <= n+d; i++)
			printf("%d ", a[i]);
		printf("\n");
	}
	return 0;
}