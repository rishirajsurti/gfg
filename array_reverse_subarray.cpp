#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n);
		for(int i = 0; i < n; scanf("%d",&a[i++]));
		int l,r; scanf("%d %d", &l, &r);
		--l; --r;
		reverse(a.begin()+l, a.begin()+r+1);
		for(int i = 0; i < n; i++){
			if(i > 0) printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}