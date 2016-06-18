#include <bits/stdc++.h>
using namespace std;

bool findPartition(int arr[], int n){
	int sum = 0;
	int i,j;
	for(i=0; i<n; i++)
		sum+=arr[i];
	if(sum&1) return false;

	bool dp[sum/2+1][n+1];
	//dp[i][j] = true if sum = i for elements arr[0] ... arr[j-1];
	//true if sum = 0 for all elements (do not select any element)
	// false if set is null
	for(j=0; j<=n; j++)
		dp[0][j] = true;

	// dp[0][0] undefined
	for(i=1; i<=sum/2 + 1; i++)
		dp[i][0] = false;

	for(i=1; i<=sum/2+1; i++){
		for(j=1; j<=n; j++){
			dp[i][j] = dp[i][j-1]; //sum i , j-1 elements
			dp[i][j] = dp[i][j] || dp[i-arr[j-1]][j-1];
		}
	}
	return dp[sum/2][n];
}
/*
bool isSubsetSum(int arr[], int n, int sum){
	if(sum == 0) return true;
	if(n==0 && sum!=0) return false;

	if(arr[n-1] > sum)
		return isSubsetSum(arr, n-1, sum);

	return isSubsetSum(arr, n-1, sum) || isSubsetSum(arr, n-1, sum - arr[n-1]);
}


bool findPartition(int arr[], int n){
	int sum = 0 ;
	for (int i = 0; i < n; ++i){
		sum+=arr[i];
	}

	if(sum & 1) return false;
	else return isSubsetSum(arr, n, sum/2);

}
*/
int main(){
	int arr[] = {3, 1, 5, 9, 12};
	int n = sizeof(arr)/sizeof(arr[0]);
	if (findPartition(arr, n) == true)
	 printf("Can be divided into two subsets "
	        "of equal sum");
	else
	 printf("Can not be divided into two subsets"
	        " of equal sum");
	return 0;
}