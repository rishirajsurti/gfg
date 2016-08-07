#include <bits/stdc++.h>
using namespace std; 
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n), b(n);
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}

		int ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = i+1; j < n; j++){
				ans = max(ans, a[i]*a[j]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}