#include <bits/stdc++.h>
using namespace std;

int lbs(int arr[], int n){
	int inc[n], dec[n];
	int i,j;
	for(i=0; i<n; i++) inc[i]=dec[i]=1;
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			//increasing at i
			//decreasing at j
			if(arr[j]<arr[i])
				inc[i] = max(inc[i], inc[j]+1);
		}
	}

	for(i=n-2; i>=0; i--){
		for(j=n-1; j>i; j--){
			if(arr[j] < arr[i])
				dec[i] = max(dec[i], dec[j]+1);
		}
	}

	int ans;
	for(i=0; i<n; i++)
		ans = max(ans, inc[i]+dec[i]-1);
	return ans;

}

int main(){
	int arr[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5,
              13, 3, 11, 7, 15};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("Length of LBS is %d\n", lbs( arr, n ) );
  return 0;
}