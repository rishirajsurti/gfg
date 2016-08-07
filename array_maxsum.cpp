#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n), b(n);
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			b[i] = a[i];
		}

		for(int i = 2; i < n; i++){
			for(int j = i-2; j>=0; j--){
				b[i] = max(b[i], b[j]+a[i]);
			}
		}
		printf("%d\n", *max_element(b.begin(), b.end()));
	}
	return 0;
}