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
		int max_so_far=-1, max_seen=1, min_seen = 1, temp;
		for(int i = 0 ; i < a.size(); i++){
			if(a[i]> 0){
				max_seen = max_seen*a[i];
				min_seen = min(min_seen*a[i], 1);
			}
			else if(a[i]==0){
				max_seen = min_seen = 1;
			}
			else if(a[i] < 0){
				temp = max_seen;
				max_seen = max(min_seen*a[i], 1);
				min_seen = temp*a[i];
			}
			if(max_seen > max_so_far)
				max_so_far = max_seen;
		}
		printf("%d\n", max_so_far);
	}
	return 0;
}	