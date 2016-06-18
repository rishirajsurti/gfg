#include <bits/stdc++.h>
using namespace std;
#define N 8

int row[N], a, b;
int countt;

bool place(int r, int c){
	for(int prev = 0; prev < c; prev++){
		if(row[prev] == r || abs(row[prev]-r) == abs(prev - c))
			return false;
	}
	return true;
}

void backtrack(int c){
	if(c==8){
		countt++;
		int i;
		for(i=0; i<N; i++)
			printf("%3d", row[i]);
		printf("\n");
	}

	int r;
	for(r=0; r<N; r++){
		if(place(r, c)){
			row[c] = r;
			backtrack(c+1);
		}
	}
}

int main(){
	countt = 0;
	backtrack(0);
	printf("%d ways\n",countt);
	return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

#define N 8
int grid[N][N];

void printGrid(){
	int i,j;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++)
			printf("%3d", grid[i][j]);
		printf("\n");
	}
}

bool isValid(int row, int col){
	// -----
	// |\
	// | \
	int i,j;
	for(i=0; i<row; i++){
		if(grid[i][col] == 1) 
			return false;
	}
	for(j=0; j<col; j++){
		if(grid[row][j] == 1)
			return false;
	}
	i=row-1; j=col-1;
	while(i>=0 &&j>=0){
		if(grid[i][j]==1)
			return false;
		i--; j--;
	}
}

void solve(int row, int queens){

}

int main(){
	int i,j;
	for(i=0; i<N; i++)
		for(j=0; j<N; j++)
			grid[i][j] = 0;
	//grid[0][0] = 1; //place first queen;
	solve(0, 0); // first row, 0 queens placed;
	return 0; 
}*/