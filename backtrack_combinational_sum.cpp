#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;
int n, b;
vector<vector<int> > ans;

void solve(int idx, int sum, vector<int> curr_set){
	if(sum < 0) return;

	if(sum == 0){
		sort(curr_set.begin(), curr_set.end());
		ans.push_back(curr_set);
		return;
	}

	if(sum < a[idx]) return;

	for(int i = idx; i < n; i++){
		curr_set.push_back(a[i]);
		solve(i+1, sum-a[i], curr_set);
		curr_set.erase(find(curr_set.begin(), curr_set.end(), a[i]));
	}
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		ans.clear();
		a.clear();
		a.assign(n, 0);
		for(int i =0 ; i< n; scanf("%d", &a[i++]));
		scanf("%d", &b);
		sort(a.begin(), a.end());
	
		vector<int> curr_set;
	
		solve(0, b, curr_set);
	
		sort(ans.begin(), ans.end());
	
		vector< vector<int> >::iterator it = unique(ans.begin(), ans.end());
	
		ans.resize(distance(ans.begin(), it));
	
		if(ans.empty()) printf("Empty");
		else
		for(int i = 0; i < ans.size(); i++){
			printf("(");
			vector<int> aa = ans[i];
			for(int j = 0; j < aa.size(); j++){
				if(j>0) printf(" ");
				printf("%d", aa[j]);
			}
			printf(")");
		}
		printf("\n");
	}
	return 0;
}


