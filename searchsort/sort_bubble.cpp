#include <iostream>
using namespace std;

void swap(int *x, int *y){

	int temp = *x;
	*x = *y;
	*y = temp;
}

void print(int a[], int n){
	int i;
	for(i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void Bubble_Sort(int a[], int n){

	int i,j;

	for(i=0; i<n-1; i++){

		for(j=0; j< n-i-1; j++){

			if(a[j] > a[j+1])
				swap(&a[j] , &a[j+1]);
		}
		print(a,n);
	}

}

int main(){
	int a[5] = {5,4,3,2,1};
	int size = sizeof(a)/sizeof(a[0]);
	Bubble_Sort(a,size);
}