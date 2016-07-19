#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n);
		for(int i = 0; i < n ; scanf("%d", &a[i++]));
		int sum = 0, maxlen = 0;
		map<int, int> m;
		
		for(int i =0 ;i  < n; i++){
			sum += a[i]; 

			if(a[i] == 0 && maxlen == 0)
				maxlen = 1;

			if(sum == 0)
				maxlen = i+1;

			if(m.find(sum) != m.end()){
				maxlen = max(maxlen, i - m[sum]);
			}
			else{
				m[sum] = i;
			}
		}
		printf("%d\n", maxlen);
	}
}