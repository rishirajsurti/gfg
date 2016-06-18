#include <iostream>
#include <cstring>
using namespace std;

int lis(int a[], int n){

	int i,j, dp[n];

	// memset sets every bit to 1:
//	memset(dp,1, sizeof(dp));
	
	for(i=0; i<n; i++)
		dp[i] = 1;

	for(i=1; i<n; i++){
		for(j=0; j<i ;j++){
			if(a[i]>a[j] && (dp[i] < dp[j] + 1))
				dp[i] = dp[j] + 1;
		}
	}
	int max = 0;
	for(i=0 ; i<n; i++){
		if(max < dp[i])
			max = dp[i];
	}
//	return 0;
	return max;
}
int main(){
	int a[] = {1,3,2,5,3};
	int size = sizeof(a)/sizeof(a[0]);
	cout<<lis(a,size)<<endl;
	return 0;
}