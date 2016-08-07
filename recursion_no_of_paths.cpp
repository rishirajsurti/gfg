#include <bits/stdc++.h>
using namespace std;

int countPaths(int m, int n){
	int a[m][n];

	for(int i = 0; i < m; i++)
		a[i][0] = 1;
	
	for(int j = 0; j < n; j++)
		a[0][j] = 1;

	for(int i = 1; i< m; i++){
		for(int j = 1; j < n; j++){
			a[i][j] = a[i-1][j]+a[i][j-1];
		}
	}
	return a[m-1][n-1];
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int m, n; scanf("%d %d", &m, &n);
		cout<<countPaths(m, n)<<endl;
	}
	return 0;
}