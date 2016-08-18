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
		reverse(a.begin(), a.end());
		for(int i =0 ; i< n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");

	}
	return 0;
}