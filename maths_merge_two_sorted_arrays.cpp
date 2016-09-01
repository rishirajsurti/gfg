#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a,b;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, m; scanf("%d %d", &n, &m);
		a.clear();
		b.clear();
		a.assign(n, 0);
		b.assign(m, 0);
		for(int i =0 ; i< n; scanf("%d", &a[i++]));
		for(int i =0 ; i< m; scanf("%d", &b[i++]));

		a.resize(a.size()+b.size());
		for(int i = n; i < m+n; i++){
			a[i] = b[i-n];
		}
		sort(a.rbegin(), a.rend());
		for(int i = 0; i < a.size(); i++){
			if(i > 0) printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}