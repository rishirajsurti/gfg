#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int a[32][32];

bool solve(int x, int n, int m){
	int i = 0, j = m-1;
	while(i < n && j>=0){
		if(x == a[i][j]) return true;
		else if(x > a[i][j]) i++;
		else if (x < a[i][j]) j--;
	}
	return false;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n, m; scanf("%d %d", &n, &m);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
		}
		int x; scanf("%d", &x);
		printf("%d\n", solve(x, n, m));
	}

	return 0;
}