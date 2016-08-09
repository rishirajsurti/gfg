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
		int max_ht = a[0];
		int ans = 1;
		for(int i = 1; i < a.size(); i++){
			if(a[i] > max_ht){
				max_ht = a[i]; 
				ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}