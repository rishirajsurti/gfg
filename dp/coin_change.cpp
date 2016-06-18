#include <iostream>
#include <vector>
using namespace std;

int Count(int S[], int m, int n){
	int dp[n+1];
	dp[0] = 1;
	int i,j;
	for(i=0; i<m; i++){
		for(j = S[i]; j<=n; j++){
			dp[j] += dp[j-S[i]];
		}
	}
}

int main(){

	int arr[] = {2,3,5};
	int m = sizeof(arr) / sizeof(arr[0]);
	int n = 4;
	cout<<Count(arr,m,n)<<endl;
	return 0;
}