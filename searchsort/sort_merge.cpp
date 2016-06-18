#include <iostream>
using namespace std;


void Merge(int a[], int l, int r, int m){
	int L[m-l+1], R[r-m];
	int i;
	for(i=l; i<=m; i++)
		L[i] = a[i];
//	L[i] = 9999;

	for(i=m+1; i<=r; i++)
		R[i] = a[i];
//	R[i] = 9999;
	int j,k;
	//i for left; j for right;
	i=0;	j=0;
	for(k=l; k<=r; k++){
		if(L[i] < R[j]){
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
	}
}

void Mergesort(int a[], int l, int r){
	
	if(l<r)
	{
		int m = (l+r)/2;
		Mergesort(a, l, m);
		Mergesort(a, m+1, r);
		Merge(a,l,r,m);
	}

}

int main(){
	int a[] = {38,27,42,3, 9, 82, 10};
	int n = 7;
	int l=0, r=6;
	//int m = (l+r)/2;
	Mergesort(a,l,r);
	int i;
	for(i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout <<endl;
	return 0;
}