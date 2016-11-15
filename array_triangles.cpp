#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vi a(n);
		for(int i = 0; i< n; scanf("%d", &a[i++]));
		sort(a.begin(), a.end());
		int ans = 0;
		for(int i = 0; i < n-2; i++){
			
			for(int j = i+1; j < n; j++){
				int k = j+1;	
				while( k < n && a[i]+a[j] > a[k]) k++;
				ans += k-j-1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}