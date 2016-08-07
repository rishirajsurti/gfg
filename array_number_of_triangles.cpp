#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		int ans = 0;
		sort(a.begin(), a.end());
		for(int i = 0; i < n-2; i++){
			for(int j = i+1; j < n-1; j++){
				int k = i+2;
				while(k < n && a[i]+a[j] > a[k])
					k++;
				ans += (k-j-1);
			}
		}
		/*for(int i = 0; i < n-2; i++){
			for(int j = i+1; j < n-1; j++){
				for(int k = j+1; k < n; k++){

					if((a[i]+a[j] > a[k]) &&
						(a[j]+a[k] > a[i]) &&
						(a[k]+a[i] > a[j]))
						ans++;
				}
			}
		}*/
		cout<<ans<<endl;

	}
	return 0;
}