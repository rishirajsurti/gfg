#include <iostream>
using namespace std;

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void Selection_Sort(int a[], int n){

	int i,j,min;

	for(i=0; i<n-1; i++){

		min = i;

		for(j=i+1; j<n; j++){
			if(a[j] < a[min])
				min = j;
		}
		swap(&a[min],&a[i]);
	}

	for(i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int a[5] = {5,4,3,2,1};
	int size = sizeof(a)/sizeof(a[0]);
	Selection_Sort(a,size);
	
	return 0;
}