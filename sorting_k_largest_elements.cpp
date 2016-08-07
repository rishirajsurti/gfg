#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n,k; scanf("%d %d", &n, &k);
		vector<int> a(n);
		for(int i = 0; i< n; scanf("%d", &a[i++]));

		sort(a.begin(), a.end());
		for(int i = n-1; i> n-1-k; i--){
			if(i < n-1) printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}