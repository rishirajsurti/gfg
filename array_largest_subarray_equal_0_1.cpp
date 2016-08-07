// C++ program to find largest subarray with equal number of
// 0's and 1's.
#include <bits/stdc++.h>
using namespace std;
 
// Returns largest subarray with equal number of 0s and 1s
int maxLen(int a[], int n)
{
	map<int, int> m;
	// sum-> index at which it was seen

	for(int i = 0; i < n; i++)
		a[i] = ((a[i] == 0) ? -1 : 1);

	int sum = 0 ;
	int maxLen = 0;
	int ending_index = -1;

	for(int i = 0; i < n; i++){
		sum += a[i];

		if(sum == 0){
			maxLen = i+1;
			ending_index = i;
		}

		//if this sum is seen before
		if(m.find(sum) != m.end()){
			if(maxLen < i-m[sum]){
				maxLen = i - m[sum];
				ending_index = i;
			}
		}
		else
			m[sum] = i;
	}
	return maxLen;
}
// Driver method
int main()
{
    int arr[] = {1, 0, 0, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    maxLen(arr, n);
    return 0;
}