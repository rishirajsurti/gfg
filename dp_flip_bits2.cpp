#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int solve(vi &a){
	int cur_ans = 0;
	int n = a.size();
	for(int i = 0; i < n; i++)
		if(a[i]) cur_ans++;

	
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ; scanf("%d", &n);
		vi a(n);
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		printf("%d\n", solve(a));
	}
	return 0;
}