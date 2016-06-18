#include <iostream>
using namespace std;

void insertion_sort(int a[], int n){

	int i,j,key;

	for(j=1; j<n; j++){
		i=j-1;
		key = a[j];
		while(i>=0 && a[i]>key){
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;
	}
}

int main(){
	int a[] = {2,1,4,5,3,7,32};
	int n = sizeof(a)/sizeof(int);

	insertion_sort(a,n);
	
	int i;
	for(i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;

}

