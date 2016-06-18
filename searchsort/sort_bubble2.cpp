#include <iostream>
using namespace std;

void bubble_sort(int a[], int n){

	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n-1-i; j++){
			if(a[j] > a[j+1]){
				a[j+1] =  a[j] + a[j+1];
				a[j] = a[j+1] - a[j];
				a[j+1] = a[j+1] - a[j];
			}
		}
	}
}

int main(){
	int a[] = {3,2,4,2,5,6,7,66,23};
	int n = sizeof(a)/sizeof(a[0]);
	bubble_sort(a,n);
	int i;
	for(i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}