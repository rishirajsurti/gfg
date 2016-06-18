#include <bits/stdc++.h>
using namespace std;

//n eggs, k floors
int eggDrop(int n, int k){
	int a[n+1][k+1];
	int res, i, j, x;

	for(i=1; i<=n; i++){
		a[i][1] = 1;
		a[i][0] = 0;
	}

	for(j=1; j<=k; j++){
		a[1][j] = j;
	}
	for(i=2; i<=n; i++){
		for(j=2; j<=k; j++){
			a[i][j] = INT_MAX;
			for(x = 1; x <= j; x++){
				res = 1+max(a[i-1][x-1], a[i][j-x]);
				if(res < a[i][j])
					a[i][j] = res;

			}
		}
	}
	return a[n][k];
}

/*int eggDrop(int n, int k){
	if(k==0 || k==1)
		return k;
	if(n==1)
		return k;

	int min = INT_MAX, i, res;

	for(i=1; i<=k; i++){
		res = max(eggDrop(n-1, i-1), eggDrop(n, k-i));
		if(res < min)
			min = res;
	}
	return min+1;
}*/

int main(){
	int n = 2, k = 100;
    printf ("\nMinimum number of trials in worst case with %d eggs and "
             "%d floors is %d \n", n, k, eggDrop(n, k));
    return 0;
}