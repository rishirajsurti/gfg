// An iterative C++ program for partition problem
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;



bool isSubsetSum (int arr[], int n, int sum)
{
	if(sum & 1) {
		printf("Cannot be partitioned\n");
		return false;
	}

	sort(arr, arr+n);
	vector<int> a, b;
	int sumA, sumB, i;
	sumA = sumB = sum/2;

	for(i =n-1 ; i >= 0; i--){
		if(arr[i] <= sumA) sumA -= arr[i], a.push_back(arr[i]);
		else if(arr[i] <= sumB) sumB -= arr[i], b.push_back(arr[i]);
	}

	if(i== -3){
		printf("Cannot be partitioned\n");
		return false;
	}
	else{
		printf("Partition 1:\n");
		for(int i = 0 ; i < a.size(); i++)
			printf("%d ", a[i]);
		printf("\n");
		printf("Partition 2:\n");

		for(int i =0 ; i<b.size(); i++)
			printf("%d ", b[i]);
		printf("\n");
		return true;
	}

}

// Driver program to test above function
int main()
{
  int arr[] = {3, 1, 5, 9, 12};
  int n = sizeof(arr)/sizeof(arr[0]);

  int sum = 0; 
  for(int i = 0; i < n; i++)
  	sum += arr[i];

 isSubsetSum(arr, n, sum);

  return 0;
}