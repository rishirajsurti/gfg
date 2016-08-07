#include <bits/stdc++.h>
using namespace std;

#define numberOfOnBits(S) (__builtin_popcount(S))

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ;scanf("%d", &n);
		vector<int> a(n);
		for(int i =0 ; i < n; scanf("%d", &a[i++]));
		int ans = 0;	
		
		int c[3] = {0}, i;
		for(int i = 0; i < n; i++)
			c[a[i]%3]++;

		ans += (c[0]*(c[0]-1))>>1;

		ans += c[1] * c[2];

		ans += (c[0] * (c[0]-1) * (c[0]-2))/6;

		ans += (c[1] * (c[1]-1) * (c[1]-2))/6;

		ans += (c[2] * (c[2]-1) * (c[2]-2))/6;

		ans += c[0] * c[1] * c[2];
		printf("%d\n", ans);
	}
}


/*#include <bits/stdc++.h>
using namespace std;

#define numberOfOnBits(S) (__builtin_popcount(S))

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n ;scanf("%d", &n);
		vector<int> a(n);
		for(int i =0 ; i < n; scanf("%d", &a[i++]));
		int ans = 0;

		for(int i = 0; i < (1<<n); i++){
			if(numberOfOnBits(i) == 2 || numberOfOnBits(i) == 3){
				int sum =0 ;
				for(int j = 0; j < n; j++){
					if(i & (1<<j)) sum+=a[j];		
				}
				if(sum%3 == 0) ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}*/