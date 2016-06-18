#include <bits/stdc++.h>
using namespace std;

int count(int s[], int m, int n){
	int i,j;
	vector<int> a(n+1, 0);
	a[0] = 1;
	for(i=0; i<m; i++){
		for(j=s[i]; j<=n; j++)
			a[j] += a[j-s[i]];
	}
	return a[n];
}

int main(){
	int arr[] = {1, 2, 3};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 4;
    printf(" %d ", count(arr, m, n));
    return 0;	
}