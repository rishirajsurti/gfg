#include <bits/stdc++.h>
using namespace std;

int bc(int n, int k){
	int c[n+1][k+1];
	int i,j;
	for(i=0; i<=n; i++){
		for(j=0; j<=min(i,k); j++){
			if(j==0 || j==i)
				c[i][j] = 1;
			else
				c[i][j] = c[i-1][j-1]+c[i-1][j];
		}
	}
	return c[n][k];
}

int main(){
	int n,k;
	n = 5;
	k = 2;
	printf("Value of %dC%d is %d\n",n, k, bc(n,k) );
}