#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		for(int i =0 ; i< n; scanf("%d", &a[i++]));
		for(int i = 0; i < n; i++){
			printf("element %d: %d\n", i, a[i]);
		}
	}
	return 0;
}