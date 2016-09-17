#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.resize(n);
		for(int i =0 ; i < n; scanf("%d", &a[i++]));
		int max_diff = INT_MIN, cur_min = a[0];
		for(int i = 1; i < n; i++){
			if(a[i]-cur_min > max_diff)
				max_diff = a[i] - cur_min;
			if(a[i] < cur_min)
				cur_min = a[i];
		}
		printf("%d\n", max_diff);
	}
	return 0;
}