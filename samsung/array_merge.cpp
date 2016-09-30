#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr1[] = {2, 3, 5, 4};
	int arr2[] = {9, 5, 1, 6};
	int arr[] = {2, 9, 3, 5, 1, 5, 4, 6};
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	int n = sizeof(arr)/sizeof(arr[0]);

	int i, j, k;
	i = j = k = 0;
	bool ok = true;
	while(i < n1 && j < n2 && k < n && ok){
		printf("%d %d %d\n", arr1[i], arr2[j], arr[k]);
		if(arr1[i] == arr2[j]){
			if(arr1[i] != arr[k]){
				ok = false; break;
			}
			if(arr[k+1] == arr1[i+1]) i++, k++;
			else if(arr[k+1] == arr2[j+1]) j++, k++;
		}
		else if(arr[k] == arr1[i]) i++, k++;
		else if(arr[k] == arr2[j]) j++,k++;
		else ok = false;
	}

	while(ok && i < n1 && k < n){
		printf("%d %d %d\n", arr1[i], arr2[j], arr[k]);

		if(arr[k] != arr1[i]) ok = false; 
		else k++, i++;
	}
	while(ok && j < n2 && k < n){
		printf("%d %d %d\n", arr1[i], arr2[j], arr[k]);

		if(arr[k] != arr2[j]) ok = false;
		else k++,j++;
	}

	if(ok) printf("Yes\n");
	else printf("No\n");

	return 0;
}