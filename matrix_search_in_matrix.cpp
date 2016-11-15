#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int n, m, k, a[35][35];

bool solve(){
	int i,j;
	i = 0; j = m-1;
	while(i < n && j >=0){
		if(a[i][j] == k) return true;
		if(a[i][j] > k) j--;
		else if(a[i][j] < k) i++;
	}
	return false;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m ;j++){
				scanf("%d", &a[i][j]);
			}
		}
		scanf("%d", &k);
		cout << solve() << endl;
	}
	return 0;
}