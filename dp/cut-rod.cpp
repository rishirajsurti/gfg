#include <bits/stdc++.h>
using namespace std;

int cutRod(int price[], int n){

	int a[n+1];
	a[0] = 0;
	int i,j;
	for(i=1; i<=n; i++) a[i] = price[i-1];

	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			a[i] = max(a[i], price[j-1] + a[i-j]);
		}
	}
	return a[n];
}

/*int cutRod(int price[], int n){
	if(n<=0) return 0;
	int ans = INT_MIN;

	int i;
	for(i=1; i<=n; i++){
		ans = max( ans, price[i-1] + cutRod(price, n-i));
	}
	return ans;
}
*/
int main(){
	int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtainable Value is %d\n", cutRod(arr, size));
    return 0;
}