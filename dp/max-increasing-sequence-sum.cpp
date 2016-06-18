#include <bits/stdc++.h>
using namespace std;

int maxSumIS(int arr[], int n){
	int a[n];
	int i,j;
	for(i=0; i<n; i++) a[i] = arr[i];

	for(i=1; i<n; i++){
		for(j=0; j<i; j++){
			if(arr[j] < arr[i]){
				a[i] = max(a[i], a[j]+arr[i]);
			}
		}
	}
	return *max_element(a, a+n);
}

int main(){
	int arr[] = {1, 101, 2, 3, 100, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sum of maximum sum increasing subsequence is %d\n",
           maxSumIS( arr, n ) );
    return 0;
}