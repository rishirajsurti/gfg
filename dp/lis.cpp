#include <bits/stdc++.h>
using namespace std;

int lis(int a[], int n){
	vector<int> l(n, 1);
	int i,j;
	int ans=-1;
	for(i=1; i<n; i++){
		for(j=0; j<i; j++){
			if(a[j]<a[i])
				l[i] = max(l[i], l[j]+1);

		}
		ans = max(ans, l[i]);
	}
	return ans;
}

int main(){
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Length of LIS is %d\n", lis( arr, n ) );
	return 0;
}