#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int n;
vi a;
vector< vi > ss;

void solve(int idx, vi &curSet){
	if(idx == n) {
		ss.push_back(curSet);
		return;
	}	
	solve(idx+1, curSet);
	curSet.push_back(a[idx]);
	solve(idx+1, curSet);
	curSet.pop_back();
}


int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		a.clear(); a.assign(n, 0);
		for(int i = 0; i < n; scanf("%d", &a[i++]));

		for(int i =0; i < (1<<n); i++){
			vi curSet;

			for(int j = 0; j < n; j++){
				if(i & (1<<j))
					curSet.push_back(a[j]);
			}
			ss.push_back(curSet);
		}
		//solve(0, curSet);
		//sort(ss.begin(), ss.end());
		for(int i =0; i < ss.size(); i++){
			printf("(");
			if(ss[i].empty()){
				printf(")");
				continue;
			}
			for(int j = 0; j < ss[i].size(); j++){

				if(j > 0)
					printf(" ");
				printf("%d", ss[i][j]);
			}
			printf(")");
		}
		printf("\n");
	}
	return 0;
}