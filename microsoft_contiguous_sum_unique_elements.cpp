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
		map<int, int> m;
		int sum = a[0], max_sum = INT_MIN;
		++m[a[0]];
		for(int i = 1; i < n; i++){

			if(m.find(a[i]) == m.end()){
				++m[a[i]]; sum += a[i];
				printf("1. %d %d\n", a[i], sum);
			}
			else{
				//encountered duplicate
				m.clear();
				max_sum = max(max_sum, sum);
				sum = a[i]; //start with a[i];
				++m[a[i]];
				printf("2. %d %d\n", a[i], sum);
			}
		}
		max_sum = max(max_sum, sum);
		printf("%d\n", max_sum);
	}
	return 0;
}