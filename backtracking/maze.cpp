#include <bits/stdc++.h>
using namespace std;
#define N 4

int grid[N][N];

int dir[8][2] = {
	{1, 0}, {-1, 0}, {0, 1}, {0, -1},
	{1, 1}, {1, -1}, {-1, 1}, {-1, -1}
};

void printPath(){
	int i,j;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++)
			printf("%3d", grid[i][j]);
		printf("\n");
	}
}

bool isValidMove(int maze[N][N], int x, int y){
	return (x>=0 && y>=0 && x<N && y<N && grid[x][y]==0 && maze[x][y]!=0);
}

bool findPath(int maze[N][N], int x, int y, int moves){
	if(x == N-1 && y == N-1)
		return true;

	int i,j,k, nx, ny; //next_x, next_y;
	
	for(k=0; k<N; k++){
		nx = x + dir[k][0];
		ny = y + dir[k][1];
		if(isValidMove(maze, nx, ny)){
			grid[nx][ny] = moves+1;
			if(findPath(maze, nx, ny, moves+1) == true)
				return true;
			else
				grid[nx][ny] = 0;
		}
	}
	return false;
}

void solve(int maze[N][N]){
	int i,j;

	for(i=0; i<N; i++)
	for(j=0; j<N; j++) grid[i][j] = 0;

	//find path, start 0,0, moves 0
	// if dest reached, return true;
	if(findPath(maze, 0, 0, 0) == true)
		printPath();
	else
		printf("Not possible\n");
}

int main(){
	int maze[N][N]  =  { 
		{1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    solve(maze);
    return 0;

}