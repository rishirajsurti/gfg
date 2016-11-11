#include <bits/stdc++.h>
using namespace std;

int n;
int m[100][100];

void fill(int n){
	int rowmin, rowmax, colmin, colmax;
	rowmin = colmin =0 ;
	rowmax = colmax = n-1;
	int count = 1;
	int i;
	while(rowmin <= rowmax){

		for(i = colmin; i <= colmax; i++)
			m[rowmin][i] = count++;
		rowmin++;

		for(i = rowmin; i <= rowmax; i++)
			m[i][colmax] = count++;
		colmax--;

		for(i = colmax; i >= colmin; i--)
			m[rowmax][i] = count++;
		rowmax--;

		for(i = rowmax; i >= rowmin; i--)
			m[i][colmin] = count++;
		colmin++;
	}
}
int main(){
	scanf("%d", &n);
	fill(n);
	for(int i = 0;i  < n ;i++){
		for(int j = 0; j < n; j++)
			printf("%5d", m[i][j]);
		printf("\n");
	}
	return 0;
}